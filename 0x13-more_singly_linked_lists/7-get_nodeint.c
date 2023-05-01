#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a linked list
 * @head: pointer to head node.
 * @index: index of the node, starting with 0
 * Return: n node, otherwise NULL (node non existent)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
