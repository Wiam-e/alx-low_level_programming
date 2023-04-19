#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: pointer to array of int type
* @size: number of elements in the array
* @cmp: pointer to function of int type
* Return: index of the first element for which the cmp function
* does not give back 0
* if no element matches or size is negative, -1 is returned
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
if (array == NULL)
return (-1);

if (size <= 0)
return (-1);

if (cmp == NULL)
return (-1);

while (x < size)
{
if (cmp(array[x]))
return (x);
x++;
}
return (-1);
}

