#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - a fucntion that tells you the number of elemeents
 *
 *
 *@h: begining of the list
 *
 *
 *Return: length of the string
 *
 *
 *
 *
 */



size_t list_len(const list_t *h)
{
size_t i;
i = 0;


while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
h = h->next;
i++;
}
return (i);
}
