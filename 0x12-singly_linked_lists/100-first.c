#include <stdio.h>

void __attribute__((constructor)) pre_main_message();

/**
 * pre_main_message - Prints a string before the main function is executed.
 *
 * Return: nothing.
 */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

