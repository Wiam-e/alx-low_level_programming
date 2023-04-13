#include "main.h"
#include <stdlib.h>
/**
* _memset - Fills the first n bytes of memory pointed by s
* with a constant byte b
* @s: buffer array
* @b: constant byte
* @n: number of bytes of memory to fill
* Return: Pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}

/**
* *_calloc - function that allocates memory for an array using malloc.
* @nmemb: number of elements in the array.
* @size: byte size of element individualy.
* Return: pointer to allocated memory, 
* or NULL if nmemb or size are equal to 0, or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);

if (nmemb == 0 || size == 0)
return (NULL);

_memset(p, 0, nmemb * size);
return (p);
}
