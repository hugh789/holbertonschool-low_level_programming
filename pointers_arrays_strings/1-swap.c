 #include "main.h"

/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers.
 */


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

