#include "main.h"
/**
*print_last_digit - function that prints last dig of a number
*@n: int to get its last digit
*Return: Value of the digit
*/
int print_last_digit(int n)
{
int i;
if (n < 0)
n = -n;
i = n % 10;
if (i < 0)
i = -i;
_putchar(i + '0');
return (i);
}
