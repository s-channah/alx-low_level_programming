#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - this creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new struct dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, nl, ol;
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (nl = 0; name[nl]; ++nl)
		;
	nl++;
	dog->name = malloc(sizeof(char) * nl);
	if ((dog->name) == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;

	for (ol = 0; owner[ol]; ++ol)
		;
	ol++;

	dog->owner = malloc(sizeof(char) * ol);
	if ((dog->owner) == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
