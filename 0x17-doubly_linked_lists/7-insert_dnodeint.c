#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a new node at a given position
*@h: head pointer
*@idx: index of the new list
*@n:value
*
*Return: address of list
*
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *current = *h;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (h == NULL)
	return (NULL);
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
	(*h)->prev = new_node;
*h = new_node;
}
else
{
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
	current->next->prev = new_node;
current->next = new_node;
}

return (new_node);
}
