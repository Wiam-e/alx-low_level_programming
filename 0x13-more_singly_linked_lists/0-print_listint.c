#include "lists.h"
#include <stdio.h>
/**
* print_listint - a function that prints all elements of a linked list.
* @h: head of the list
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t nd;
for (nd = 0; h != NULL; nd++)
{
printf("%d\n", h->n);
h = h->next;
}
return (nd);
}
