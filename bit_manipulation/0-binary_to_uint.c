#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary string to convert
 *
 * Return: The converted number, or 0 if b is NULL or contains
 *         a character that is not '0' or '1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1; /* Left shift the result to make space for the new bit */
			result += b[i] - '0'; /* Add the binary digit to the result */
			i++;
		}
		else
		{
			return (0); /* Return 0 if there is a character that is not '0' or '1' */
		}
	}

	return (result);
}
