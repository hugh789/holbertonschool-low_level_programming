#include "main.h"

/**
 * print_line - Prints a line of underscores
 * @n: Number of times to print the underscore
 *
 * Description: This function prints a line of underscores 'n' times,
 *              followed by a newline character.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
