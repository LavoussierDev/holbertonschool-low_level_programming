#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog struct
 * @name: dog's age as a character
 * @age: dog's age as a float
 * @owner: dog owner's name as a string
 * @d: dog struct pointer initialized
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
