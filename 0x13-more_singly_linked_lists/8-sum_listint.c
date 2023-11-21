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
 *
 *
 */

int sum_listint(listint_t *head)
{
int x;
x = 0;
while (head != NULL)
{
x += head->n;
head = head->next;
}
return (x);
}
