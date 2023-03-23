#include "main.h"
#includ <unistd.h>
/**
*_putchar - a function that writes a character c to stdout
*@c: the character to print
*Return: 1 (Success), else -1, errno is set
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
