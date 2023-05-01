#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all
 * data (n) of a linked list.
 * @head: pointer to head of a list.
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum = sum + (head->n);
	}
	return (sum);
}
