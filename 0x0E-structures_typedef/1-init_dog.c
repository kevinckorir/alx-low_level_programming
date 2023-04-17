#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialize a variable type struct dog
 * @d: variable name
 * @name: first param
 * @age: second param
 * @owner: third param
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
