#include <stdlib.h>

listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int n)
{
  unsingned int inz = 0;
  if (idx == 0)
    {
      listint_t *newNode = create_new_node(n);
      if (newNode == NULL)
	return NULL;

      newNode->next = *head;
      *head = newNode;
      return newNode;
    }

  listint_t *hc = *head;
  unsigned int inz = 0;

  while (hc != NULL)
    {
      if (idx == inz + 1)
	{
	  listint_t *newNode = create_new_node(n);
	  if (newNode == NULL)
	    return NULL;

	  listint_t *nextN = hc->next;
	  hc->next = newNode;
	  newNode->next = nextN;
	  return newNode;
	}
      inz++;
      hc = hc->next;
    }

  return NULL;
}
