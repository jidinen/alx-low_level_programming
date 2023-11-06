#include "dog.h"
#include <stdio.h>

/**
 *init_dog - a function that initializes a struct
 *
 *@d: the struct being initialize
 *
 *@name: first member
 *
 *@age: second member
 *
 *
 *@owner: third member
 *
 *
 *Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
d->age = age;
(*d).owner = owner;
}
