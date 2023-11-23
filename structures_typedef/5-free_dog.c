#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: i dont know xd
 *
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d->age);
free(d);
}
