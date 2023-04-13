#include "main.h"
#include <stdlib.h>
/**
* *string_nconcat - function that concatenates two strings.
* @s1: string to add to
* @s2: string to concatenate from.
* @n: number of bytes added from s2 to s1
* Return: pointer to the outcome of concatenation, if failed then NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int i, j, l1, l2;
j = 0;
while (s1 && s1[l1])
{
l1++;
}
while (s2 && s2[l2])
{
l2++;
}
if (n >= l2)
{
n = l2;
c = malloc(sizeof(char) * (l1 + l2 + 1));
}
else
c = malloc (sizeof(char) * (l1 + n + 1));
if (c == NULL)
return (NULL);

for (i = 0; i < l1 ; i++)
{
c[i] = s1[i];
}
while (j < n)
{
c[i++] = s2[j];
}
c[i++] = '\0';
return (c);
}
