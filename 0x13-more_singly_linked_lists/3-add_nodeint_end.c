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

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *enode = (listint_t *)malloc(sizeof(listint_t));

if (enode == NULL)
{
return (NULL);
}
enode->next = NULL;
enode->n = n;
if (*head == NULL)
{
*head = enode;
}
else 
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = enode;
}
return (enode);
}
