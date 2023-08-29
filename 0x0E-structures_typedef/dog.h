#ifndef _DOG
#define _DOG

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - a structure that holds the details of a dog.
 * @name: pointer to the string that holds the name of the dog.
 * @age: age of the dog.
 * @owner: the pointer to the string that holds the name of the dogs owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
