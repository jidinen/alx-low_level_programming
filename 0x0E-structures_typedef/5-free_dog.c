#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - releases the space allocated
 *
 *@d: the param
 *
 *Return: void
 *
 *
 *
 *
 *
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

