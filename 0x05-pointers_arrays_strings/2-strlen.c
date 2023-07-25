#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The required string
 *
 * Return: int(the lenght of the required string
 */

int _strlen(char *s)
{
	int i, j;
	i = 0;

	for (i = 0; s[j] != '\0'; j++)
		i++;

	return (i);
}
