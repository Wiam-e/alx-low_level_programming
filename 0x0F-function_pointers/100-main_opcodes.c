#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the opcodes of its own
* @argc: number of arguments
* @argv: array of arguments
* Return:  0 (Success)
*/
int main(int argc, char *argv[])
{
int byt, i;
char *array;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

byt = atoi(argv[1]);
if (byt < 0)
{
printf("Error\n");
exit(2);
}

array = (char *)main;
for (i = 0; i < byt; i++)
{
if (i == byt - 1)
{
printf("%02hhx\n", array[i]);
break;
}
printf("%02hhx ", array[i]);
}
return (0);
}
