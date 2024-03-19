#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer.
* @array: The integer to check.
* @size: The size of the array.
* @cmp: The function pointer.
* Return: 0 if false, something else otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (size > 0)
    {
            if (array != NULL && cmp != NULL)
            {
                    while (i < size)
                    {
                        if(cmp(array[i]))
                            return (i);
                        i++;
                    } 
    }

    return (-1);
}
