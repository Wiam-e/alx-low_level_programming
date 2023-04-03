#include "main.h"
/**
* *_strspn - function that gets the length of a prefix substring
* @s: is the string to test
* @accept: string containing the list of characters to match in s
* Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k, r;
k = 0;
for (i = 0; s[i] != '\0'; i++)
{
r = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
r = 1;
}
}
if (r == 0)
{
return (k);
}
}
return (0);
}
