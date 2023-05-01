#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: head of linked list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
