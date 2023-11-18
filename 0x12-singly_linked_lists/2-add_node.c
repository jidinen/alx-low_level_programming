#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 *add_node - adds to the list
 *
 *
 *
 *@head: staritn point
 *
 *
 *@str: string
 *
 *
 *Return: pointer to a string
 *
 *
 *
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *newnode = (list_t *)malloc(sizeof(list_t));
if (head == NULL)
{
return (NULL);
}

if (newnode == NULL)
{
return (NULL);
}

newnode->str = strdup(str);

if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = strlen(str);
newnode->next = *head;
*head = newnode;

return (newnode);
}
