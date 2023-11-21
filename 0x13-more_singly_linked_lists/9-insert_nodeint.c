#include <stdlib.h>
#include <stdio.h>
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
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
unsigned int inz;
listint_t *hc;

if(newNode == NULL)
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






hc = *head;

inz = 0;


while (hc != NULL)
{
 if (idx == inz + 1)
{

listint_t *nextN = hc->next;

hc->next = newNode;

newNode->next = nextN;

return (newNode);
}
inz++;

hc = hc->next; 
}

free(newNode);

return (NULL);
}


