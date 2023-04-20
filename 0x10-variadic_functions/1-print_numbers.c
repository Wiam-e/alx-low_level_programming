#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print each number with separator, followed by a newline
* @separator: string to be printed between numbers
* @n: number of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list pn;
va_start(pn, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pn, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(pn);
}
