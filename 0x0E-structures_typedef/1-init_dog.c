#include "dog.h"

/**
 * init_dog - intialises a variable of type dog
 * @d: address of the dog variable
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
