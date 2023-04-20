#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
* print_all - a function that prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *s;
char *separator = "";
va_list l;
va_start(l, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'i':
printf("%s%d", separator, va_arg(l, int));
break;

case 'f':
printf("%s%f", separator, va_arg(l, double));
break;

case 'c':
printf("%s%c", separator, va_arg(l, int));
break;

case 's':
s = va_arg(l, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s%d", separator, s);
break;
}
i++;
}
printf("\n");
va_end(l);
}
