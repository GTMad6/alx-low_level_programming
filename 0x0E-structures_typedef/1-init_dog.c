#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of new dog struct
 * @d: pointer to struct of the new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d =malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
