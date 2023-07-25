#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The required string
 *
 * Return: int(the lenght of the required string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i); /*please work*/
}
