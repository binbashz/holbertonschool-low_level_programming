

### El preprocesador de C 
es el preprocesador para el lenguaje de programación C. Es el primer programa invocado por el compilador y procesa directivas como #include, #define e #if. Estas directivas no son específicas de C. En realidad pueden ser usadas con cualquier tipo de archivo.

El preprocesador utiliza 4 etapas denominadas Fases de traducción. Aunque alguna implementación puede elegir hacer alguna o todas las fases simultáneamente, debe comportarse como si fuesen ejecutadas paso a paso.
La forma más común de usar el preprocesador es incluir otro archivo:

#include <stdio.h>

int main (void)
{
    printf ("¡Hola Mundo!\n");
    return 0;
}
El preprocesador reemplaza la línea #include <stdio.h> con el archivo de cabecera del sistema con ese nombre. En dicha cabecera se declara, entre otras cosas, la función printf(). Más concretamente donde se pone la directiva #include se sustituirá por el contenido completo del archivo 'stdio.h'.

También puede escribirse usando dobles comillas: #include "stdio.h". Originalmente esta distinción conseguía diferenciar entre los archivos de cabecera del sistema (<>) y los de usuario (""). Los compiladores de C y los entornos de desarrollo actuales disponen de facilidades para indicar dónde se encuentran los distintos archivos de cabecera. Sin embargo se sigue recomendando usar la misma nomenclatura por cuestiones de claridad en el código. La localización de los archivos de cabecera pueden ser indicados desde la línea de comandos o desde un archivo makefile para hacer el código más portable.

Se puede utilizar cualquier extensión para los archivos de cabecera. Pero, por convención, se utiliza la extensión .h para los archivos de cabecera y .c para los archivos que no son incluidos por ningún otro. También pueden encontrarse otras extensiones. Por ejemplo, los archivos con extensión .def suelen ser archivos cuyo contenido está diseñado para ser incluido muchas veces.

#include normalmente obliga a usar protectores de #include o la directiva #pragma once para prevenir la doble inclusión, porque si se incluye más de 1 vez el mismo archivo, (dependiendo del contenido) puede causar que se intente declarar varias veces las mismas funciones o tipos de variable, lo que va a generar un error al compilar, esto se intenta prevenir de la siguiente forma:

#ifndef __ARCHIVO_H__
#define __ARCHIVO_H__

/*... declaraciones de funciones, etc. ...*/

#endif
Como resultado, al intentar inclurse el archivo por segunda vez, la operación "ifndef" va a dar falso porque __ARCHIVO_H__ ya estaba definido de la primera vez que se incluyó, y a consecuencia se saltea todo el bloque hasta llegar al "endif" que suele estar al final del archivo.

Compilación condicional
Las directivas #ifdef, #ifndef, #else, #elif y #endif pueden usarse para realizar compilaciones condicionales.

#define __WINDOWS__

#ifdef __WINDOWS__
#include <windows.h>
#else
#include <unistd.h>
#endif
La primera línea define una macro __WINDOWS__. Las macros pueden estar definidas por el compilador, se pueden especificar en la línea de comandos al compilador o pueden controlar la compilación del programa desde un archivo makefile.

El código siguiente comprueba si la macro __WINDOWS__ está definida. Si es así, como en el ejemplo, se incluye el archivo <windows.h>, en caso contrario, se incluye <unistd.h>.

Ejemplos de otros usos
Como el preprocesador puede invocarse independientemente del proceso de compilación de código fuente también puede utilizarse como un preprocesador de propósito general para otros tipos de procesamiento de textos. Ver Preprocesadores de propósito general para ver otros ejemplos.

Definición de macros y expansión
Hay dos tipos de macros: las que son como objetos y las que son como funciones. Las que se asemejan a funciones toman parámetros mientras que las que se asemejan a objetos no. La forma de definir un identificador como una macro de cada tipo es, respectivamente:

#define <identificador> <lista de tokens a reemplazar>
#define <identificador>(<lista de parámetros>) <lista de tokens a reemplazar>
Hay que tener en cuenta que no hay ningún espacio entre el identificador de la macro y el paréntesis izquierdo.

Cada vez que el identificador aparezca en el código fuente será reemplazado por la lista de tokens. Incluso si está vacía. Los identificadores declarados como funciones solo se reemplazan cuando se invoca con los parámetros con los que se definió la macro.

Las macros tipo objetos se usan normalmente como parte de prácticas de buena programación para crear nombres simbólicos para constantes. Por ejemplo:

#define PI 3.14159
en vez de utilizar el número tal cual en el código.

Un ejemplo de macro actuando como función es:

#define RADAGRA(x) ((x) * 57.29578)
Esta macro define la forma de convertir radianes a grados. Después podemos escribir RADAGRA(34). El preprocesador sustituirá la llamada a la macro por la multiplicación definida antes. Las macros aquí mostradas están escritas en mayúsculas. Esto permite distinguir fácilmente entre macros y funciones compiladas en el código fuente.
