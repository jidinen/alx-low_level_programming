#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - at a node at index
 *
 *
 *
 *@head: the starting point of the node
 *
 *
 *@idx: the index
 *
 *
 *@n: data
 *
 *Return: the newnode
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
return (NULL);
}
