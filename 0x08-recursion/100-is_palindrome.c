#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string
* @s: string
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* test_pal - function to test the string recursively if palindrome
* @s: string 
* @l: length of the string
*@i: iterator
*Return: 1 if palindrome, else 0.
*/
int test_pal(char *s, int l, int i)
{
if (*(s + i) != *(s + l - 1))
return (0);
else if (i >= l)
return (1);
return (test_pal(s, i + 1, l - 1));
}
/**
* is_palindrome - function that tests if string is palindrome
* @s: string
* Return: 1 if string is palindrome, else 0
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (test_pal(s, 0, _strlen_recursion(s)));
}
