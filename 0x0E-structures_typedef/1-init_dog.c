#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: name giving to the structure, and it is passed by reference.
 * @name: name of the dog, type string, and it is passed by reference.
 * @age: age of dog, type float, and it is passed by value.
 * @owner: name of the dog onwer, type string, and it is passed by reference.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
