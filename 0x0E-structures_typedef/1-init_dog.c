#include "dog.h"
#include <stdlib.h>
/**
* init_dog - function that initialize a variable of type struct dog
* @d: struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: name of dogs owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
