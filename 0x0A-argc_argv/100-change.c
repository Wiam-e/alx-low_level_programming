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
int sum, count, i;
int cents[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]);
count = 0;
while (sum > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
if (sum >= cents[i])
{
count += sum / cents[i];
sum = sum % cents[i];
}
}
if (sum == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
