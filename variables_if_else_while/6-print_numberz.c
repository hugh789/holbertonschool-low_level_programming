#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 separated by commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x;

    for (x = 0; x < 10; x++)
    {
        putchar(x + '0');
        if (x < 9)
        {
            putchar(',');
            putchar(' ');
        }
        else
        {
            putchar('\n');
        }
    }
    return (0);
}
