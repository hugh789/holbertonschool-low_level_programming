#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 *
 * Description: This function prints the binary representation of a given
 * number to the standard output.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int print = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			print = 1;
		}
		else if (print == 1)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
