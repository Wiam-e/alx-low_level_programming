#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: pointer to head of a list.
 * Return: the pointer to the first node
 * of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *nxt;

	for (curr = NULL, nxt = NULL; *head != NULL; (*head)->next)
	{
		nxt = (*head)->next;
		(*head)->next = curr;
		curr = *head;
		*head = nxt;
	}
	*head = curr;
	return (*head);
}
