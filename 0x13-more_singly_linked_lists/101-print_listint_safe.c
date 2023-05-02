#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer head of linked list
 * Description: This function can print lists with a loop,
 * and navigate the list only once.
 * Return: number of nodes in list (Sucess),
 * otherwise, exit prgrm with st 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *now = *head;
	const listint_t *p;

	if (now == NULL)
		exit(98);

	for (i = 0; now != NULL; i++)
	{
		p = now;
		now = now->next;
		printf("[%p] %d\n", (void *)p, p->n);

		if (p < now)
		{
			printf("-> [%p] %d\n", (void *)now, now->n);
			break;
		}
	}
	return (i);
}
