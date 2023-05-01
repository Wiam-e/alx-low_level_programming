#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a linked list
 * @head: pointer to head
 * @n: n element.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd;
	listint_t *cr_nd;   /* current node */
/* (void)cr_nd; */
	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
	return (NULL);

	new_nd->n = n;
	new_nd->next = NULL;
	cr_nd = *head;
	if (*head == NULL)
	{
		*head = new_nd;
	}
	else
	{
		while (cr_nd->next != NULL)
		{
			cr_nd = cr_nd->next;
		}
		cr_nd->next = new_nd;
	}

	return (*head);
}
