#include "main.h"

/**
* _isdigit -  a function that checks for a digit 0-9
* @i: number to input
* Return: 1 if i is a digit, else 0
*/
int _isdigit(int i)
{
if ((i >= 48) && (i <= 57))
return (1);
else
return (0);
}
