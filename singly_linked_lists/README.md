#### Singly Linked List 
 is a linear data structure in which the elements are not stored in 
contiguous memory locations and each element is connected only to its next element using a pointer.
Please use this data structure for this project:

PROYECT


Please use this data structure for this project:

```
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
```
-----------------------------------------------------------------------------------------------------------------------------

 TAREA 0
Escribe una función que imprima todos los elementos de una lista list_t.

Prototipo: `size_t imprimir_lista(const list_t *h);`

Devuelve: el número de nodos
Formato: ver ejemplo
Si str es NULL, imprime [0] (nil)
Puede utilizar printf.


Dentro de la función, se crea una variable count inicializada en cero que se utiliza para contar la cantidad de nodos que se imprimieron.
 Luego, se inicia un bucle while que se ejecuta mientras h no sea nulo (es decir, mientras haya nodos en la lista).

Dentro del bucle, se imprime el nodo actual.
Si el campo str del nodo no es nulo,
se imprime el contenido del campo len y str utilizando el formato [%d] %s\n.
 Si str es nulo, se imprime la cadena [0] (nil)\n.

Después de imprimir el nodo actual, la función avanza al siguiente nodo y se incrementa la variable count en uno. Cuando se han impreso todos los nodos de la lista,
 la función devuelve el valor de count.

--------------------------------------------------------------------------------------------------------------------------------
 TAREA 1

Escribir una función que reciba como parámetro una lista enlazada list_t y que devuelva la cantidad de elementos que hay en ella.
 La función se llamará list_len y tendrá el siguiente prototipo: `size_t list_len(const list_t *h);`
 

Una lista enlazada es una estructura de datos en la que cada elemento (también llamado "nodo") contiene un valor y una referencia al siguiente elemento de la lista.
 La lista comienza con un nodo inicial llamado "cabeza" (también conocido como "head"), y el último nodo de la lista tiene una referencia a NULL.


En este caso, la función list_len deberá recorrer la lista y contar cuántos elementos hay en ella.
 Para hacer esto, se utilizará un bucle while que irá avanzando por los nodos de la lista hasta llegar al final
 (es decir, hasta encontrar un nodo cuyo campo next sea NULL). En cada iteración del bucle,
 se incrementará un contador que irá contando cuántos nodos se han recorrido. Al final, la función devolverá el valor de este contador.
...

----------------------------------------------------------------------------------------------------------------------------------------



```
 /*listas enlazadas mediantes un puntero, coformada por un campo con dato y puntero apuntador al siguiente enlace */
```

/\* en un nodo estan esos dos campos o miembros , conformado por una structura , puede ser typdef ,un nulo al final de la cadena. Esto en lista simple lineal \*/

[![Single-Linked-List](https://user-images.githubusercontent.com/113644952/202858724-44f49168-f45f-40a3-bb58-e10df8e957d6.png)](https://user-images.githubusercontent.com/113644952/202858724-44f49168-f45f-40a3-bb58-e10df8e957d6.png)

You have to start somewhere, so we give the address of the first node a special name called HEAD. Also, the last node in the linked list can be identified because its next portion points to NULL.

Linked lists can be of multiple types: singly, doubly, and circular linked list. In this article, we will focus on the singly linked list

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#representation-of-linked-list)Representation of Linked List

Let's see how each node of the linked list is represented. Each node consists:

A data item An address of another node We wrap both the data item and the next node reference in a struct as:

struct node { int data; struct node \*next; };

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#understanding-the-structure-of-a-linked-list-node-is-the-key-to-having-a-grasp-on-it)Understanding the structure of a linked list node is the key to having a grasp on it.

Each struct node has a data item and a pointer to another struct node. Let us create a simple Linked List with three items to understand how this works.

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#-initialize-nodes-)/\* Initialize nodes \*/

struct node \*head;

struct node \*one = NULL;

struct node \*two = NULL;

struct node \*three = NULL;

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#-allocate-memory-)/\* Allocate memory \*/

one = malloc(sizeof(struct node));

two = malloc(sizeof(struct node));

three = malloc(sizeof(struct node));

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#-assign-data-values-)/\* Assign data values \*/

one->data = 1;

two->data = 2;

three->data=3;

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#-connect-nodes-)/\* Connect nodes \*/

one->next = two;

two->next = three;

three->next = NULL;

# [](https://github.com/m4uricioo/holbertonschool-low_level_programming/tree/master/singly_linked_lists#-save-address-of-first-node-in-head-)/\* Save address of first node in head \*/

head = one;

If you didn't understand any of the lines above, all you need is a refresher on pointers and structs.

In just a few steps, we have created a simple linked list with three nodes.

representing linked list by connecting each node with next node using address of next node Linked list Representation

The power of a linked list comes from the ability to break the chain and rejoin it. E.g. if you wanted to put an element 4 between 1 and 2, the steps would be:

Create a new struct node and allocate memory to it. Add its data value as 4 Point its next pointer to the struct node containing 2 as the data value Change the next pointer of "1" to the node we just created. Doing something similar in an array would have required shifting the positions of all the subsequent elements.
