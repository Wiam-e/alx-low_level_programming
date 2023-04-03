#include "main.h"
#include <stdio.h>
/**
* print_chessboard - function that prints the chessboard
* @a: row of array
*Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
int i, j;
i = 0;
while (i < 8)
{
for (j = 0; j < 8; j++)
{
if (j == 7)
{
_putchar(a[i][j]);
_putchar('\n');
}
else
_putchar(a[i][j]);
}
i++;
}
}
