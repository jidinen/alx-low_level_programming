#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes a node
 *
 *
 *
 *
 *@head: starting point of the list*
 *
 *
 *Return: the value of the poped node
 *
 *
 *
 *
 */

int pop_listint(listint_t **head)
{
listint_t *x = *head;
int b = x->n;
if (head == NULL)
{
return (0);
}
else
{
*head = (*head)->next;

free(x);
}
return (b);
}
