#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  function that prints the sum of the
*two diagonals of a square matrix of integers.
*@a: array name
*@size: size of array.
*Return: nothing
*/
void print_diagsums(int *a, int size)
{
int i, j, s1, s2;

s1 = 0;
s2 = 0;
for (i = 0; i < size; i++)
{
s1 = s1 + a[i];
a = a + size;
}
a = a - size;
for (j = 0; j < size; j++)
{
s2 = s2 + a[j];
a = a - size;
}
printf("%d, %d\n", s1, s2);
}
