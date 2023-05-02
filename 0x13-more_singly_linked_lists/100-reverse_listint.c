#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: pointer to head of a list.
 * Return: the pointer to the first node
 * of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c;
	listint_t *nxt;

	for (c = NULL, nxt = NULL; *head != NULL;)
	{
		nxt = (*head)->next;
		(*head)->next = c;
		c = *head;
		*head = nxt;
	}
	*head = c;
	return (*head);
}
