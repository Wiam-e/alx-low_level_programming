#include <stdio.h>
/**
*main - a program that prnts alphabet in lowercase except q and e
*Return: 0 (Success)
*/
int main(void)
{
char a;
a = 'a';
while (a <= 'z')
{
if ((a != 'q' && a != 'e') && (a <= 'z'))
putchar(a);
a++;
}
putchar('\n');
return (0);
}
