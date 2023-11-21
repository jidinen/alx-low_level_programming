#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_listint - prints the members of a struct
 *
 *
 *@h: the head or starting point of a node
 *
 *
 *Return: i the numbers of node
 *
 *
 *
 *
 *
 *
 *
 */

size_t print_listint(const listint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
