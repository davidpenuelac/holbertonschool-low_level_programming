#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog.
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: Always 0.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog = (dog_t *)malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
ndog->name = (char *)malloc(sizeof(name));
if (ndog->name == NULL)
return (NULL);
ndog->owner = (char *)malloc(sizeof(owner));
if (ndog->owner == NULL)
return (NULL);
ndog->name = strdup(name);
ndog->age = age;
ndog->owner = strdup(owner);
return (ndog);
}
