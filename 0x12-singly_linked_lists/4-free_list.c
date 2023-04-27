#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function about freeing a linked list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *h, *fr; /* fr to free next */
	h = head;

	while (h != NULL)
	{
		fr = h->next;
		free(h->str);
		free(h);
		h = fr;
	}
}
