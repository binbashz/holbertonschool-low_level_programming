 Singly Linked List ,  is a linear data structure in which the elements are not stored in 
contiguous memory locations and each element is connected only to its next element using a pointer.
Please use this data structure for this project:

PROYECT
Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

-----------------------------------------------------------------------------------------------------------------------------

##TAREA 0
Escribe una función que imprima todos los elementos de una lista list_t.

Prototipo: size_t imprimir_lista(const list_t *h);
Devuelve: el número de nodos
Formato: ver ejemplo
Si str es NULL, imprime [0] (nil)
Puede utilizar printf

Dentro de la función, se crea una variable count inicializada en cero que se utiliza para contar la cantidad de nodos que se imprimieron.
 Luego, se inicia un bucle while que se ejecuta mientras h no sea nulo (es decir, mientras haya nodos en la lista).

Dentro del bucle, se imprime el nodo actual. Si el campo str del nodo no es nulo, se imprime el contenido del campo len y str utilizando el formato [%d] %s\n.
 Si str es nulo, se imprime la cadena [0] (nil)\n.

Después de imprimir el nodo actual, la función avanza al siguiente nodo y se incrementa la variable count en uno. Cuando se han impreso todos los nodos de la lista,
 la función devuelve el valor de count.
--------------------------------------------------------------------------------------------------------------------------------
## TAREA 1
escribir una función que reciba como parámetro una lista enlazada list_t y que devuelva la cantidad de elementos que hay en ella.
 La función se llamará list_len y tendrá el siguiente prototipo: size_t list_len(const list_t *h);.

Recuerda que una lista enlazada es una estructura de datos en la que cada elemento (también llamado "nodo") contiene un valor y una referencia al siguiente elemento de la lista.
 La lista comienza con un nodo inicial llamado "cabeza" (también conocido como "head"), y el último nodo de la lista tiene una referencia a NULL.

En este caso, la función list_len deberá recorrer la lista y contar cuántos elementos hay en ella.
 Para hacer esto, se utilizará un bucle while que irá avanzando por los nodos de la lista hasta llegar al final
 (es decir, hasta encontrar un nodo cuyo campo next sea NULL). En cada iteración del bucle,
 se incrementará un contador que irá contando cuántos nodos se han recorrido. Al final, la función devolverá el valor de este contador.
