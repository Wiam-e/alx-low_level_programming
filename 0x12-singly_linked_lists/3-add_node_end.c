#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function to add a new node at the end of a linkedlist
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t l;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	new_node->len = l;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
	*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
