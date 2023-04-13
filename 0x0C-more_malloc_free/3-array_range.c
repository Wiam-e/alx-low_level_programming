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
int *p, i = 0;
if (min > max)
return (NULL);

p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);

while (min <= max)
{
p[i] = min;
min++;
i++;
}
return (p);
}
