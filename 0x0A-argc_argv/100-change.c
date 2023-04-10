#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - print the min number of coins to make change for an amount of money
* @argc: argument count
* @argv: array of strings
* Return: 0 (success), else 1 if error
*/
int main(int argc, char *argv[])
{
int sum, count;
unsigned int i;
int cents[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
count = atoi(argv[1]);
sum = 0;
for (i = 0; i < 5 && count >= 0; i++)
{
while (count >= cents[i])
{
sum++;
count -= cents[i];
}
}
printf("%d\n", sum);
return (0);
}
