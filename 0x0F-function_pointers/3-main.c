#include "3-calc.h"
/**
* main - program that performs as a calculator
* @argc: size of arguments
* @argv: array of arguments
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int n, m, r;
char c;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n = atoi(argv[1]);
m = atoi(argv[3]);

func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}

c = *argv[2];
if ((c == '/' || c == '%') && m == 0)
{
printf("Error\n");
exit(100);
}
r = func(n, m);
printf("%d\n", r);

return (0);
}
