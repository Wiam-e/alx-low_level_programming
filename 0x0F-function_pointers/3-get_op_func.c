#include "3-calc.h"
#include <stdio.h>
/**
* get_op_func - function that selects an the correct operator
* @s: operator passed as argument to the program
* Return: success,
* if there is no match between s and operator then NULL is returned.
*/
int (*get_op_func(char *s))(int, int)
{
int i;
op_t operator[] = {{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (operator[i].op != NULL && strcmp(operator[i].op, s) != 0)
{
i++;
}
return (operator[i].f);
}
