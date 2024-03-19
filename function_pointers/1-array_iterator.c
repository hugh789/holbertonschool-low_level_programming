#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: array of int
 * @size: size of array
 * @action: funciton to call * 
 * Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0; 

    if (array != NULL && action != NULL)
    {
        while (i < size)
        {
            action(array[i]);
            i = i +1;
        }
    }
}
