#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{ /* Check if pointer is not NULL*/
	free(d->name); /* Free memory allocated for the name string*/
	free(d->owner); /* Free memory allocated for the owner string*/
	free(d); /*Free memory allocated for the dog_t struct*/
	}
}
