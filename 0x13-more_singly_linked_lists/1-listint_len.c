#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *listint_len - the length of the node
 *
 *
 *@h: the starting point of the list
 *
 *Return: the length of nodes
 *
 *
 *
 */

size_t listint_len(const listint_t *h)
{
size_t j;
j = 0;

while (h != NULL)
{
++j;
h = h->next;
}
return (j);
}
