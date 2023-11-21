#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *add_nodeint - adds a node at the begining of a list
 *
 *
 *@head: starting point of the list
 *@n: member of the node
 *
 *Return: the newnode
 *
 *
 *
 *
 *
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
if (head == NULL)
{
*head = newnode;
}
else
{
newnode->next = *head;
*head = newnode;
newnode->n = n;
}
return (newnode);
}
