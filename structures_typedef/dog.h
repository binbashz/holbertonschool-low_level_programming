#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - struct with name dog.
 *
 * @name: name of the dog, first member
 * @age: age of the dog, second member
 * @owner: owner of the puppy, thrid member
 */
	 struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
