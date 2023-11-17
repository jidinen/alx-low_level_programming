#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_list - a function that prints a list
 *
 *
 *
 *@h: the head
 *i
 *
 *
 *Return: the number of elmeents printed
 *
 *
 *
 *
 *
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
size_t i = 0;


while (h != NULL)
{
if (h->str == NULL)
{
printf("(nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
++i;
}
printf("-> %lu elements\n", i);
return (i);
}
