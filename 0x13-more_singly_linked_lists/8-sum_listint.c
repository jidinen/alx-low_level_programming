#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sum the of the data in a node
 *
 *
 *
 *@head: starting point of the list
 *
 *
 *Return: sum
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
