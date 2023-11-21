#include <stdlib.h>

int delete_node_at_index(listint_t** head, unsigned int index) {
  unsigned int x = 0;
  listint_t* currentNode = *head;
  listint_t* prevNode = NULL;

  while (currentNode != NULL) {
    if (index == x) {
      if (prevNode != NULL) {
	prevNode->next = currentNode->next;
	free(currentNode);
	return (1); // Success
      } else {
	// If prevNode is NULL, it means we are deleting the head
	return delete_head(head);
      }
    }
    x++;
    prevNode = currentNode;
    currentNode = currentNode->next;
  }

  return (-1); // Index not found
}
