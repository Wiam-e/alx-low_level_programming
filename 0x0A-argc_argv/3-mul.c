#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, l, f, dg;
i = 0;
d = 0;
n = 0;
l = 0;
f = 0;
dg = 0;
while (s[l] != '\0')
l++;
while (i < l && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
dg = s[i] - '0';
if (d % 2)
dg = -dg;
n = n * 10 + dg;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

/**
* main - multiplies two numbers
* @argc: arguments count
* @argv: array of strings
* Return: 0 (Success), else if error 1
*/
int main(int argc, char *argv[])
{
int mul, i, j;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
i = _atoi(argv[1]);
j = _atoi(argv[2]);
mul = i *j;
printf("%d\n", mul);
return (0);
}
