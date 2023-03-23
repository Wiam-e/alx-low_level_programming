#include "main.h"
/**
* more_numbers - a function that prints 10 times the numbers from 0 to 14
* Return: 0-14 x10
*/
void more_numbers(void)
{
int i, m;
for (m = 0; m < 10; m++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
