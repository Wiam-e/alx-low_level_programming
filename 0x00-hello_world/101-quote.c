#include<stdio.h>
#include<unistd.h>
/**
*main - a program that uses write function to print a line
*Return: 1 (Success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
