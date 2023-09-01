#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer pointer to the required number.
 * @index: the index to be changed.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
