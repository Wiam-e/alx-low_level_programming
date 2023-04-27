#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Returns the number of elements in a linked list
 * @h: head of linked list (pointer)
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t s;
	s = 0;
	while (h != NULL)
	{
		h = h->next;
		s++;
	}

	return (s);
}
