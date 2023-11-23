#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* print_dog - check the code
* @d: pointer
*
* Return: Always 0.
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
