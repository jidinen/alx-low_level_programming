#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

size_t listint_len(const listint_t *h)
{
size_t j;
j = 0;

while(h != NULL)
{
++j;
h = h->next;
}
return (j);
}
