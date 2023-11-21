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
