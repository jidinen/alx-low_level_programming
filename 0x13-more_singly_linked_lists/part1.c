#include <stdlib.h>

int delete_head(listint_t** head) {
  if (*head != NULL) {
    listint_t* nextNode = (*head)->next;
    free(*head);
    *head = nextNode;
    return 1; // Success
  } else {
    return -1; // Failure, list is empty
  }
}
