#include "lists.h"
/**
* listint_len - find the number of elements in a linked list
* @h: linked list head
* Return: the number of elements in a list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;   /* i is number of elements */

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
