#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers 1 - 100 with
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;
    char B[88];

    while (i++ < 100)
        !sprintf(B, "%s%s", i % 3 ? "" : "Fizz", i % 5 ? "" : "Buzz")
            ? sprintf(B, "%d", i) : 0, printf(", %s", B);

    return (0);
}
