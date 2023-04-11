#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - create a 2d integer grid using malloc.
* @width: int size width
* @height: int size height
* Return: Pointer to new grid, otherwise Null if failed
*/
int **alloc_grid(int width, int height)
{
int **g2;
int i, j = 0;
if (width <= 0 || height <= 0)
return (NULL);
g2 = malloc(height *sizeof(int));

if (g2 == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
g2[i] = malloc(width *sizeof(int));
if (g2[i] == NULL)
{
free(g2);
for (j = 0; j <= i; j++)
{
free(g2[j]);
return (NULL);
}
}
while (j < width)
{
g2[i][j] = 0;
j++;
}
}
return (g2);
}
