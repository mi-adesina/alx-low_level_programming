#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: First parameter
 * @b: Second parameter
 *
 * Description: I will like to do this with an algorithm I
 * learnt in a course I took at the University of Lagos.
 * I will swap the values without creating a new variable
 * so as to use less memory space.
 *
 * Return: void(nothing)
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
