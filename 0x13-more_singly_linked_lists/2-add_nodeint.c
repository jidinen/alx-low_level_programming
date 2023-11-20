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
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
if (*head == NULL)
{
return (NULL);
}
else if (newnode == NULL)
{
return (NULL);
}
else 
{
newnode->next = *head; 
*head = newnode;
newnode->n = n;
}
return (newnode);
}
