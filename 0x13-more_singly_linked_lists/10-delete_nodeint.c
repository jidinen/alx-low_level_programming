#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node at an index
 *
 *
 *@head: starting point of the node
 *
 *
 *@index: index to delete
 *
 *Return: 1 or -1
 *
 *
 *
 */

int delete_node_at_index(listint_t **head, unsigned int index);

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (index == 0)
{
if (*head != NULL)
{
listint_t *nexnode = (*head)->next;
free(*head);
*head = nexnode;
return (1);
}
}
return (-1);
}
