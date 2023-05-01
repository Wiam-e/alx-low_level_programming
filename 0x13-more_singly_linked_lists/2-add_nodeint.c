#include "lists.h"
/**
 * add_nodeint - add a new node at the head of a linked list
 * @head: head of a list.
 * @n: the number of elements.
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nd;

	new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
	return (NULL);

	else
	{
	new_nd->n = n;
	new_nd->next = *head;
	*head = new_nd;
}
	return (*head);
}
