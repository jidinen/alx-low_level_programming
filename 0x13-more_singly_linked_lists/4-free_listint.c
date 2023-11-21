#include <stdio.h>
#include <stdlib.h>
#include  "lists.h"

/**
 *free_listint  - deletes the node
 *
 *@head: starting point
 *
 *
 *Return: none
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


void free_listint(listint_t *head)
{

while (head != NULL)
{
listint_t *cx = head;
head = head->next;
free(cx);
}
}
