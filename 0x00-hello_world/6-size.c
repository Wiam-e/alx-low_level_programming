#include<stdio.h>
/**
*main - a program that prints the size of various types using printf function
*Return: 0 (Success)
*/
int main(void)
{
char a;
int i;
long int j;
long long int s;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
