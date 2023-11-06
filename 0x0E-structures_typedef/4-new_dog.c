#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *new_dog - create a new dog
 *
 *
 *@name: first member
 *
 *@age: second member
 *
 *@owner: third member
 *
 *Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i, j;
i = strlen(name);
j = strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (i + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (j + 1));
if (dog->name == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
