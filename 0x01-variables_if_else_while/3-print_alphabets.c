#include <stdio.h>
/**
*main - a program that orints alphabets
*Return: 0 (Success)
*/
int main(void)
{
char l = 'a';
char u = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar("\n");
return (0);
}
