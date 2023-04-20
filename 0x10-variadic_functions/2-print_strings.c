#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function that prints strings
* @separator: string to be printed between strings
* @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ps;
char *s;
unsigned int i;
va_start(ps, n);
for (i = 0; i < n; i++)
{
s = va_arg(ps, char*);
if (s != NULL)
printf("%s", s);
else if (s == NULL)
printf("(nil)");

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(ps);
}
