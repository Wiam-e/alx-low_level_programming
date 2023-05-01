#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a linked list
 * @head: double pointer to head node of a linked list
 * Return: head node's data n, otherwise 0 (list empty)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int head_nd;

	if (*head == NULL)
	{
	return (0);
	}
	else
	{
	h = *head;
	head_nd = h->n;
	*head = h->next;
	free(h);
	}
	return (head_nd);
}
