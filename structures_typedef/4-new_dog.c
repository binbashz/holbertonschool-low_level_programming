#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t)); /* Allocate memory for the dog_t struct*/

	if (p == NULL)
	{	/* Check if allocation was successful*/
	return (NULL);
	}

	p->name = strdup(name); /* Allocate memory for and copy the name string*/
	if (p->name == NULL)  /*Check if allocation was successful*/
	{
	free(p);
	return (NULL);
	}

	p->age = age; /* Assign the age value to the age field of the dog_t struct*/

	p->owner = strdup(owner); /* Allocate memory for and copy the owner string*/
	if (p->owner == NULL)  /* Check if allocation was successful*/
	{
	free(p->name);
	free(p);
	return (NULL);
	}

	return (p); /* Return a pointer to the new dog_t struct*/
}
