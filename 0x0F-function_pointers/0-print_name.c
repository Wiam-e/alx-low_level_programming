#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function to print a name
* @name: pointer of char type
* @f: pointer to function
* Return: Success
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}

