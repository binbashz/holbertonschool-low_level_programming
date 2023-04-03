#include "dog.h"
#include <stdio.h>

/**
  * init_dog - initialize a variable of type struct dog
  * @d: Pointer to a struct dog;
  * @name: first member
  * @age: second member
  * @owner: thir memeber
  *
  * Description: Initialize a variable of type struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
