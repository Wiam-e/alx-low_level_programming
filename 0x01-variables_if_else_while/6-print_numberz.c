#include <stdio.h>
/**
*main - program that prints single digit numbs starting with 0
*Return: 0 (Success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
