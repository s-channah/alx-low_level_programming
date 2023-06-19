#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new struct created named dog
 * @name: 1st member about dog's name
 * @age: 2nd member about dog's age
 * @owner: 3rd member about dog's owner
 * dog_t - typedef for struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
