#include "main.h"
/**
* is_palindrome - function that tests if a string is a palindrome
* @s: string
* Return: 1 if string is palindrome, else 0.
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (test_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length 
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* test_pal - function that tests string recursively if it is palindrome
* @s: string tested
* @i: iterator
* @l: length of the string
* Return: 1 if palindrome, otherwise 0
*/
int test_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
return (0);
if (i >= l)
return (1);
return (test_pal(s, i + 1, l - 1));
}
