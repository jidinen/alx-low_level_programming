#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *add_node_end -function adds to list
 *
 *
 *
 *@head: starting point of the list
 *
 *@str: string to be copied
 *
 **Return: to the list
 *
 *
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *endnode = (list_t *)malloc(sizeof(list_t));

if (endnode == NULL)
{
return (NULL);
}
endnode->str = strdup(str);
endnode->len = strlen(str);
if (endnode->str == NULL)
{
free(endnode);
return (NULL);
}

endnode->next = NULL;

if (*head == NULL)
{
*head = endnode;
}
else
{
list_t *hc = *head;
while (hc->next != NULL)
{
hc = hc->next;
}
hc->next = endnode;
}
return (endnode);
}
