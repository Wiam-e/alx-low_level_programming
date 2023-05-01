#include "lists.h"
/**
* free_listint2 - a function that frees a linked list
* and sets head to NULL.
* @head: double pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
	}
}
