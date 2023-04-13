#include "main.h"
#include <stdlib.h>
/**
* *array_range - function that creates an array of integers
* @min: minimum values, min included
* @max: maximum values, max included
* Return: pointer to the new array, otherwise NULL,
* if malloc fails then NULL.
*/
int *array_range(int min, int max)
{
int *p, i;
p = malloc(sizeof(int) * (max - min + 1));
if ((min > max) || (p == NULL))
return (NULL);

for (i = 0; min <= max; i++)
{
p[i] = min++;
}
return (p);
}
