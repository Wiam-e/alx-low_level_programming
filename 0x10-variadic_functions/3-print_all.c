#include "variadic_functions.h"
#include "prnt_fun.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
* Return: Success
*/
void print_all(const char * const format, ...)
{
int i = 0, j;
va_list lst;
char *sep;
pt f[] = {
{"c", prnt_c}, {"i", prnt_i},
{"f", prnt_flt}, {"s", prnt_s},
{NULL, NULL}
};
va_start(lst, format);
sep = "\0";
while (format && format[i])
{
for (j = 0; f[j].lst != NULL; j++)
{
if (format[i] == f[j].test[0])
{
printf("%s", sep);
f[j].printer(lst);
sep = ", ";
}
}
i++;
}
printf("\n");
va_end(lst);
}
