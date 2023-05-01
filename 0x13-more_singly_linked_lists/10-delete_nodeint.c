#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a linked list.
 * @head: pointer head of a list.
 * @index: index of the list where the node is deleted.
 * Return: 1 (Success), otherwise -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prv;
	listint_t *next;

	prv = *head;

	if (index != 0)
	{
	for (i = 0; i < index - 1 && prv != NULL; i++)
	{
	prv = prv->next;
	}
	}
	if (prv == NULL || (prv->next == NULL && index != 0))
	{
	return (-1);
	}
	next = prv->next;

	if (index != 0)
	{
	prv->next = next->next;
	free(next);
	}
	else
	{
	free(prv);
	*head = next;
	}
	return (1);
}
