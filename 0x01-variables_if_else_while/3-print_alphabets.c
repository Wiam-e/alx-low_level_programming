#include <stdio.h>
/**
*main - a program that orints alphabets
*Return: 0 (Success)
*/
int main(void)
{
char l;
l= 'a';
char u;
u= 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (u <= 'Z')
{
putchar(l);
u++;
}
return (0);
}
