#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the pointer to the string name.
 * @f: a function pointer.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		if (f != NULL)
			f(name);
	}
}
