#include "lists.h"

/**
 * print_list - function that prints elements of nodes in list_t
 * @h: a pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    const list_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        if (current->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", current->len, current->str);
        }
        count++;
        current = current->next;
    }
    return (count);
}
