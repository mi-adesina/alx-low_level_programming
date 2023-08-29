#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: a pointer to the name of the dog, and type string.
 * @age: the age of the dog.
 * @owner: a pointer to the name of the dog owner, and type sting.
 *
 * Return: a pointer to the memory location on
 *         the heap wher the new dog struct is stored.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || name == NULL || owner == NULL)
	{
		free(new_dog)
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
