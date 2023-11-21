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


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *c = *head;
listint_t *p = NULL;
x = 0;
if (index == 0)
{
if (*head != NULL)
{
listint_t *nexnode = (*head)->next;
free(*head);
*head = nexnode;
return (1);
}
else
{
return (-1);

}
}



while (head != NULL)
{
if (index == x)
{
if (p != NULL)
{
p->next = c->next;
free(c);
return (1);
}
else
{
*head = c->next;
free(c);
return (1);
}
}

x++;
p = c;
c = c->next;
}
return (-1);
}
