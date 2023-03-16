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
printf("Size of a char: %c byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %li byte(s)\n", sizeof(j));
printf("Size of long long int: %lli byte(s)\n", sizeof(s));
printf("Size of a float %f byte(s)\n", sizeof(f));
return (0);
}
