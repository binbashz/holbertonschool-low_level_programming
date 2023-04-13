



Llamadas al sistema para manejo de ficheros
El UNIX proporciona un conjunto de llamadas al sistema para la manipulación de ficheros. Todas las aplicaciones o utilidades que en UNIX trabajan con ficheros están fundamentadas en estos servicios básicos. La biblioteca estándar de C dispone de un conjunto de funciones para utilizar directamente estas llamadas al sistema, proporcionando al programador la misma visión que sobre los recursos tiene el sistema operativo UNIX.

Estas funciones se suelen denominar "de bajo nivel". La biblioteca estándar también ofrece otras rutinas más cómodas, construidas a partir de las llamadas al sistema. (La interfaz con estos servicios se encuentra en <stdio.h>).

Este apartado explica algunas de las llamadas al sistema del UNIX que trabajan con ficheros, que les permitirán:

* Abrir y cerrar un fichero

* Crear y borrar un fichero

* Leer en un fichero

* Escribir en un fichero

* Desplazarse por un fichero

Laboratorio de Operativos: Las llamadas al sistema del HP-UX se encuentran en los manuales "C Programming Routines (sección 2)".

Manejo de ficheros en UNIX
El manejo de ficheros en UNIX sigue el modelo de la sesión. Para trabajar con un fichero hay primero que abrirlo con una invocación a la función open. Ésta devuelve un descriptor de fichero (file descriptor en inglés), un número entero que servirá de identificador de fichero en futuras operaciones. Finalmente hay que cerrar el fichero, con la función close, para liberar los recursos que tengamos asignados.

Existen al menos tres descriptores ya establecidos en la ejecución de un programa (ya los han abierto por nosotros). El descriptor 0 es la entrada estándar (normalmente el teclado), el descriptor 1 es la salida estándar (normalmente la pantalla) y el descriptor 2 el fichero estándar de visualización de errores (también la pantalla, normalmente). Los pueden considerar como simples ficheros que ya han sido abiertos, y pueden trabajar con ellos con cierta normalidad. Incluso los pueden cerrar.

Los ficheros en UNIX permiten tanto el acceso directo como el secuencial. Cada fichero abierto dispone de un puntero que se mueve con cada lectura o escritura. Hay una función especial llamada lseek para posicionar ese puntero donde se quiera dentro del fichero.

Especificación de los permisos: forma octal
Las llamadas al sistema creat y open admiten un parámetro entero en el que se especifican los permisos con los que se crea un archivo. Una de las maneras más cómodas de declararlos es mediante la representación octal.

Los permisos se forman como un número de 9 bits, en el que cada bit representa un permiso, tal y como se muestra en el cuadro (es el mismo orden con el que aparecen cuando hacemos un ls).

RWX

RWX
RWX
usuario
grupo
otros
Se toman los nueve permisos como tres números consecutivos de 3 bits cada uno. Un bit vale 1 si su permiso correspondiente está activado y 0 en caso contrario. Cada número se expresa en decimal, del 0 al 7, y los permisos quedan definidos como un número octal de tres dígitos. Para poner un número en octal en el lenguaje C, se escribe con un cero a la izquierda.
Por ejemplo, los permisos rw-r--r-x son el número octal 0645.

/* Crea un fichero con permisos RW-R--R-- */

int fd = creat ( "mi_fichero", 0644);

Apertura, creación y cierre de ficheros
Función open
La función open abre un fichero ya existente, retornando un descriptor de fichero. La función tiene este prototipo:

int open ( char* nombre, int modo, int permisos );

El parámetro nombre es la cadena conteniendo el nombre del fichero que se quiere abrir.

El parámetro modo establece la forma en que se va a trabajar con el fichero. Algunas constantes que definen los modos básicos son:
O_RDONLY

abre en modo lectura
O_WRONLY

abre en modo escritura
O_RDWR

abre en modo lectura-escritura
O_APPEND

abre en modo apéndice (escritura desde el final)
O_CREAT

crea el fichero y lo abre (si existía, se lo machaca)
O_EXCL

usado con O_CREAT. Si el fichero existe, se retorna un error
O_TRUNC

abre el fichero y trunca su longitud a 0

Para usar estas constantes, han de incluir la cabecera <fcntl.h>. Los modos pueden combinarse, simplemente sumando las constantes, o haciendo un "or" lógico, como en este ejemplo:

	O_CREAT | O_WRONLY
El parámetro acceso sólo se ha de emplear cuando se incluya la opción O_CREAT, y es un entero que define los permisos de acceso al fichero creado. Consulten en la bibliografía cómo se codifican los permisos.

La función open retorna un descriptor válido si el fichero se ha podido abrir, y el valor -1 en caso de error.

Función creat
Si desean expresarmente crear un fichero, disponen de la llamada creat. Su prototipo es

int creat ( char* nombre, int acceso );

Equivale (más o menos) a llamar a open (nombre, O_RDWR|O_CREAT, acceso). Es decir, devuelve un descriptor si el fichero se ha creado y abierto, y -1 en caso contrario.

Función close
Para cerrar un fichero ya abierto está la función close:

int close ( int fichero );

donde fichero es el descriptor de un fichero ya abierto. Retorna un 0 si todo ha ido bien y -1 si hubo problemas.

Borrado de ficheros
La función

int unlink ( char* nombre );

borra el fichero de ruta nombre (absoluta o relativa). Devuelve -1 en caso de error.

Lectura y escritura
Para leer y escribir información en ficheros, han de abrirlos primero con open o creat. Las funciones read y write se encargan de leer y de escribir, respectivamente:

int read ( int fichero, void* buffer, unsigned bytes );

int write( int fichero, void* buffer, unsigned bytes );

Ambas funciones toman un primer parámetro, fichero, que es el descriptor del fichero sobre el que se pretende actuar.

El parámetro buffer es un apuntador al área de memoria donde se va a efectuar la transferencia. O sea, de donde se van a leer los datos en la función read, o donde se van a depositar en el caso de write.

El parámetro bytes especifica el número de bytes que se van a transferir.

Las dos funciones devuelven el número de bytes que realmente se han transferido. Este dato es particularmente útil en la función read, pues es una pista para saber si se ha llegado al final del fichero. En caso de error, retornan un -1.

Hay que tener especial cautela con estas funciones, pues el programa no se va a detener en caso de error, ni hay control sobre si el puntero buffer apunta a un área con capacidad suficiente (en el caso de la escritura), etc., etc.

La primera vez que se lee o escribe en un fichero recién abierto, se hace desde el principio del fichero (desde el final si se incluyó la opción O_APPEND). El puntero del fichero se mueve al byte siguiente al último byte leído o escrito en el fichero. Es decir, UNIX trabaja con ficheros secuenciales.

Movimiento del puntero del fichero
El C y UNIX manejan ficheros secuenciales. Es decir, conforme se va leyendo o escribiendo, se va avanzando en la posición relativa dentro del fichero. El acceso directo a cualquier posición dentro de un fichero puede lograrse con la función lseek.

long lseek ( int fichero, long desp, int origen );

Como siempre, fichero es el descriptor de un fichero y abierto.

El parámetro desp junto con origen sirven para determinar el punto del fichero donde va a acabar el puntero. desp es un entero largo que expresa cuántos bytes hay que moverse a partir del punto indicado en origen, parámetro que podrá adoptar estos valores:
0

SEEK_SET

inicio del fichero
1

SEEK_CUR

relativo a la posición actual
2

SEEK_END

relativo al final del fichero

Las constantes simbólicas se encuentran en <stdlib.h> y <unistd.h>.

El parámetro desp puede adoptar valores negativos, siempre que tengan sentido. Si el resultado final da una posición mayor que el tamaño del fichero, éste crece automáticamente hasta esa posición.

La función lseek devuelve un entero largo que es la posición absoluta donde se ha posicionado el puntero; o un -1 si hubo error. Obsérvese que la función lseek puede utilizarse también para leer la posición actual del puntero.

Ejemplos
En las siguientes líneas se muestran dos programas que emplean las llamadas al sistema.

Primer programa: creación y escritura
Este ejemplo crea un fichero y escribe en él unos caracteres.
```
#include <string.h>     /* Función strlen() */
#include <fcntl.h>      /* Modos de apertura y función open()*/
#include <stdlib.h>     /* Funciones write() y close() */

main ( int argc, char* argv[] )
{
   /* Cadena que se va a escribir */
   const char* cadena = "Hola, mundo";

   /* Creación y apertura del fichero */
   int fichero = open ("mi_fichero", O_CREAT|O_WRONLY,0644);

   /* Comprobación de errores */
   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   /* Escritura de la cadena */
   write(fichero, cadena, strlen(cadena));
   close(fichero);
   return 0;

}
```

Segundo programa: lectura
Este programa lee diez caracteres, a partir de la posición 400, de un fichero ya existente.
```
#include <fcntl.h>      /* Modos de apertura */
#include <stdlib.h>     /* Funciones de ficheros */

main ( int argc, char* argv[] )
{
   char cadena[11];	/* Depósito de los caracteres */
   int leidos;

   /* Apertura del fichero */

   int fichero = open ("mi_fichero", O_RDONLY);

   /* Comprobación */   
   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   /* Coloca el puntero en la posición 400 */
   lseek(fichero,400,SEEK_SET);

   /* Lee diez bytes */
   leidos = read(fichero, cadena, 10);
   close(fichero);
   cadena[10]=0;

   /* Mensaje para ver qué se leyó */
   printf ( "Se leyeron %d bytes. La cadena leída es %s\n", leidos,cadena );

   return 0;
}
```




---------------------------------------------------------------

TASK O

--------------------------------------------------------------


TASK 1


int create_file(const char *filename, char *text_content);
Descripción de los parámetros de entrada:

filename: Puntero a una cadena de caracteres que representa el nombre del archivo a crear.
text_content: Puntero a una cadena de caracteres NULL-terminada que contiene el contenido de texto que se escribirá en el archivo.
Descripción de la salida:

La función devuelve un entero, donde 1 indica éxito y -1 indica fallo (no se pudo crear el archivo, no se pudo escribir en el archivo, escritura "falla", etc.).
Requisitos de la función

El archivo creado debe tener permisos rw-------, 
lo que significa que solo el propietario del archivo tiene permisos de lectura y escritura.
Si el archivo ya existe, no se deben cambiar los permisos del archivo.
Si el archivo ya existe, se debe truncar para borrar su contenido previo antes de escribir el nuevo contenido proporcionado.
Si filename es NULL, la función debe retornar -1.
Si text_content es NULL, se debe crear un archivo vacío.
En resumen, la función create_file debe crear un archivo con el nombre especificado, establecer sus permisos como rw-------, truncar el archivo si ya existe,
escribir el contenido de texto proporcionado en el archivo y retornar 1 en caso de éxito y -1 en caso de fallo.
 Además, debe manejar casos especiales como filename o text_content siendo NULL.
--------------------------------------------------------------------------------------
