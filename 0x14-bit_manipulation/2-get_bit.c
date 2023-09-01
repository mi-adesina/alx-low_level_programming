#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the given number to be checked.
 * @index: the index to be checked.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;

	if (n == 0)
	{
		return (-1);
	}
	else
		n %= 2;
	return (n);
}
