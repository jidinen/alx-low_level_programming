#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - frees the node (delete)
 *
 *@head: starting point of the list
 *
 *
 *
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
 */

void free_listint2(listint_t **head)
{

while (*head != NULL)
{
listint_t *cx = *head;
*head = (*head)->next;
free(cx);
}
*head = NULL;
}
