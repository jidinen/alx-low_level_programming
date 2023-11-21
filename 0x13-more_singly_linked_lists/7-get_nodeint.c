#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - get a node at an index
 *
 *
 *
 *@head: starting point of the node
 *
 *
 *@index: the index of the
 *
 *Return: 0
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int di;
di = 0;
while (head != NULL)
{
if (index == di)
{
return (head);
}
head = head->next;
di++;
}
return (0);
}
