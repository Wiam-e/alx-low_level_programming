#include "main.h"
/**
*_islower - a function that checks lowercase alphabets
*@c: the character to check
*Return: 1 if character is lowercas else 0 not lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
