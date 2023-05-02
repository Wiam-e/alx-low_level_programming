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
	listint_t *hd;

	hd = *h;

	if (h != NULL || hd != NULL)
	return (0);

	while (hd)
	{
		if (hd - hd->next)
		{
			space = hd->next;
			free(hd);
			hd = space;
			l++;
		}
		else
		{
			free(hd);
			hd = NULL;
			l++;
			break;
		}
	}
	hd = NULL;
	return (l);
}
