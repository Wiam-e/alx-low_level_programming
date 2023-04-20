#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: const unsigned int type
* Return: results of the sum of numbers,
* if n is equal to 0, then 0.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list add;
va_start(add, n);
if (n == 0)
return (0);
else
{
for (i = 0; i < n; i++)
{
sum += va_arg(add, unsigned int);
}
va_end(add);
return (sum);
}
}
