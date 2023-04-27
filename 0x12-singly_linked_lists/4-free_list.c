#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a linked list
 * @head: head of linked list
 * Return: 0 (Success)
 */
void free_list(list_t *head)
{
  list_t *h, *fr;

	h = head;
	while (h != NULL)
	{
		fr = h->next;
		free(h->str);
		free(h);
		h = fr;
	}
}
