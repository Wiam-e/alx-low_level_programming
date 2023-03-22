#include <stdio.h>
#include "main.h"
/**
*print_to_98 - prints natural numbers from n to 98
*New line
*@n: print starts with this number
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d \n", n);
break;
}
else
{
printf("%d", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d \n", n);
break;
}
else
{
printf("%d, ", n);
}
}
}
}
