#include "dog.h"
#include <stdlib.h>
/**
* new_dog - function that creates a new dog name
* @name: dogs name
* @age: dogs age
* @owner: name of dogs owner
* Return: pointer to new dog, otherwise NULL.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *doggy;
int i, j, k;
char *n, *o;
i = 0;
j = 0;
doggy = malloc(sizeof(struct dog));
if (doggy == NULL)
return (NULL);

while (name[i] != '\0')
{
i++;
}
while (owner[j] != '\0')
{
j++;
}
n = malloc(sizeof(char) * i + 1);
if (n == NULL)
{
free(doggy);
return (NULL);
}
o = malloc(sizeof(char) * j + 1);
if (o == NULL)
{
free(n);
free(doggy);
return (NULL);
}
for (k = 0; k <= i; k++)
{
n[k] = name[k];
}
for (k = 0; k <= j; k++)
{
o[k] = owner[k];
}
doggy->name = n;
doggy->age = age;
doggy->owner = o;
return (doggy);
}
