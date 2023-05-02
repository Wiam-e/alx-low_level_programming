#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to head of list.
 * @idx: the index of the list where the new node
 * should be added, starting with 0.
 * @n: integer element.
 * Return: the address of the new node,
 * otherwise NULL (Fail).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_nd;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
		h = h->next;
		}
	}
	if (h == NULL && idx != 0)
	return (NULL);

	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
	return (NULL);

	new_nd->n = n;

	if (idx == 0)
	{
	new_nd->next = *head;
	*head = new_nd;
	}
	else
	{
	new_nd->next = h->next;
	h->next = new_nd;
	}
	return (new_nd);
}
