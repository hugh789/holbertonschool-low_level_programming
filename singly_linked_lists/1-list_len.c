#include "lists.h"

/**
 *list_len - function that returns  number of nodes in list_t a linked list
 *@h: a pointer
 *Return: value of count
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
