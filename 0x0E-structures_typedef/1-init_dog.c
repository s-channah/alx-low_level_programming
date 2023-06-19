#include "dog.h"
#include <stddef.h>
/**
 * init_dog - it initializes a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
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
