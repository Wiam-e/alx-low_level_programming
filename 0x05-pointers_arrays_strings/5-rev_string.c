#include "main.h"
/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
char tmp;
int i, k, k1;
k = 0;
k1 = 0;
while (s[k] != '\0')
{
k++;
}
k1 = k - 1;
for (i = 0; i < k / 2; i++)
{
tmp = s[i];
s[i] = s[k1];
s[k1--] = tmp;
}
}
