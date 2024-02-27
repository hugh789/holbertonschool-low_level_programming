#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: Number of times to print the diagonal line
 *
 * Description: This function prints a diagonal line of backslashes
 *              'n' times, followed by a newline character.
 *              If 'n' is less than or equal to 0, it prints only a newline.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
