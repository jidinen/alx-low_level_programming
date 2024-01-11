#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node *insertAtBeginning(struct Node *head, int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  if (head == NULL)
    {
    head = newNode;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
  else
    {
      struct Node *headcopy = head;
      head = newNode;
      newNode->data = data;
      newNode->next = headcopy;
      return newNode;
    }
}
void printList(struct Node* head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main() {
  struct Node* myList;

  myList = insertAtBeginning(myList, 3);
  myList =  insertAtBeginning(myList, 7);
  myList = insertAtBeginning(myList, 12);

  printList(myList);

  return 0;
}
