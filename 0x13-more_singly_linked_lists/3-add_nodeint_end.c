#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - at a node to the end of the list
 *
 *
 *
 *@head: starting point of the list
 *
 *@n: member of the node
 *
 *Return: the node added
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
