#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked - function that allocates memory using malloc
* @b: number of bytes to allocate
* Return: pointer to the allocated memory (Success), else 98 
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p != NULL)
{
return (p);
}
else
exit (98);
}
