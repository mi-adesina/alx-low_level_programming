#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the pointer to the required binary number.
 *
 * Return: the converted number, or
 *         0 if there is one or more chars in the string b that is not 0 or 1
 *         or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;

	if (!b)
		return (0);

	i = 0;
	j = 0;

	while (b[j])
	{
		if (b[j] == '1')
			i += 1;
		else if (b[j] == '0')
			i += 0;
		else
			return (0);

		if (++j)
			i *= 2;
	}
	i /= 2;
	return (i);
}
