#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a linked list
 * @head: head of linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *h;

	h = head;
	while (h != NULL)
	{
	free(h->str);
		free(h);
		h = h->next;
	}
}
