#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to be measured
 *
 * Description: This function calculates length of the string pointed to by s.
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
		length++;
	
	return (length);
}
