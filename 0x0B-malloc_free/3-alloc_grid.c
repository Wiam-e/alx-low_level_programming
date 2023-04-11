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
int **g;
int i = 0, j = 0;
if (width + height < 2 || width < 1 || height < 1)
return (NULL);

g = malloc(height * sizeof(*g));

if (g == NULL)
return (NULL);

while (i < height)
{
{
g[i] = (int *) malloc(width * sizeof(**g));
if (g[i] == NULL)
{
free(g);
for (j = 0; j <= i; j++)
{
free(g[j]);
return (NULL);
}
}
i++;
}
while (j < width)
{
g[i][j] = 0;
j++;
}
}
return (g);
}
