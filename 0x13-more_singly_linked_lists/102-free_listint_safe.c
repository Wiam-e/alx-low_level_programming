#include "lists.h"
/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to head of the linked list
 * Description: function can free lists with a loop,
 * and navigate list only once, sets head to null.
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	listint_t *space;

	if (h == NULL || *h == NULL)
	return (0);

	while (*h)
	{
		if ((*h - (*h->next)) > 0)
		{
			space = (*h)->next;
			free(*h);
			*h = space;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
