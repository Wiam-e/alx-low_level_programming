#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, j, n, l, k, dgt;
i = 0;
j = 0;
n = 0;
l = 0;
k = 0;
dgt = 0;
while (s[l] != '\0')
l++;
while (i < l && k == 0)
{
if (s[i] == '-')
++j;
if (s[i] >= '0' && s[i] <= '9')
{
dgt = s[i] - '0';
if (j % 2)
dgt = -dgt;
n = n * 10 + dgt;
k = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
k = 0;
}
i++;
}
if (k == 0)
return (0);
return (n);
}
