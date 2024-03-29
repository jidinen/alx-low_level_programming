#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *current = *head;
if (!head || !*head)
	return (-1);
if (index == 0)
{
*head = current->next;
if (current->next)
	current->next->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index && current; i++)
{
	current = current->next;
}
if (!current)
	return (-1);
if (current->prev)
	current->prev->next = current->next;
if (current->next)
	current->next->prev = current->prev;
free(current);
return (1);
}
