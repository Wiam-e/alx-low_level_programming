#include <unistd.h>
/**
*_putchar is a function that writes the character a to stdout
*@c: the character to print
*Return: 1 (Success)
*Return: -1 (Error), errno is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
