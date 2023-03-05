



#include <stdio.h>

/* Definimos la función print_diagsums, que recibe un puntero a un array unidimensional de enteros y el tamaño del lado de la matriz*/
void print_diagsums(int *a, int size) 
{

    int i, j, sum1 = 0, sum2 = 0;  /* Inicializamos los índices i y j, y las variables que almacenarán las sumas de las diagonales*/

    /* Recorremos la matriz para calcular la suma de la diagonal principal y la diagonal secundaria*/
    for (i = 0; i < size; i++) 
{
        for (j = 0; j < size; j++) 
{
            if (i == j) 
{  /* Si estamos en la diagonal principal, sumamos el elemento actual a la suma de la diagonal principal*/
                sum1 += *(a + i*size + j);
            }

            if (i + j == size - 1) 
{  /* Si estamos en la diagonal secundaria, sumamos el elemento actual a la suma de la diagonal secundaria*/

                sum2 += *(a + i*size + j);
            }
        }
    }

    /* imprimimos las sumas de las diagonales*/

    printf("main diagonal sum: %d\n", sum1);
    printf("second diagonal sum: %d\n", sum2);
}
