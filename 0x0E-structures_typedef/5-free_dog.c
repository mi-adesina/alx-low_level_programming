#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: the pointer to the structure variable.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
