#include <stdio.h>
#include <main.h>

#define MAX_SIZE 100 /* Maximum size of string */

/**
 * main - Entry point
 *
 * Description: This function prompts the user to input a string,
 * calculates its length using strlen, and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char text[MAX_SIZE];
    int length;

    length = strlen(text);

    printf("Length of '%s' = %d",length);

    return (0);
}
