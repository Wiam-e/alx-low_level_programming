#include <stdio.h>
/**
*main - a program that prints alphabets in reverse
*Return: 0 (Success)
*/
int main(void)
{
char a;
a = 'z';
while (a >= 'a')
putchar(a);
a--;
}
putchar('\n');
return (0);
}
