#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints n numbers separated by a given separator.
 * @separator: The string to be printed between numbers.
 * @n: the no. of integers to print.
 * @...: The integers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
    unsigned int count = 0;
    va_list args;

    va_start(args, n);

    while (count < n)
    {
        int num = va_arg(args, int);
        printf("%i", num);

        if (count < (n -1) && separator != NULL)
        {
            printf("%s", separator);
        }

        count++;
    }

    va_end(args);

    printf("\n")
}
