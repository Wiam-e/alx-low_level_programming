#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: the index of the list where
 * the new node should be added
 * @n: integer element.
 * Return: the address of the new node,
 * or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_nd;

	if (idx != 0)
	{
	i = 0;
	while (i < idx - 1 && head != NULL)
		{
		head = head->next;
		i++;
		}
	}

	if (head == NULL && idx != 0)
	return (NULL);

	new = malloc(sizeof(listint_t));
	if (new_nd == NULL)
	{
	return (NULL);
	}
	new_nd->n = n;
	if (idx == 0)
	{
		new_nd->next = *head;
		*head = new_nd;
	}
	else
	{
		new_nd->next = head->next;
		head->next = new_nd;
	}
	return (new_nd);
}
