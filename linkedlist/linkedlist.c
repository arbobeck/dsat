#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
}

int main(){
  struct Node* head = NULL;
  struct Node* current = NULL;

  for (int i=10; i<=50; i+=10){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data= i;
    newNode->next = NULL;

    if (head == NULL){
      head = newNode;
      current = newNode;
    } else {
      current->next = newNode;
      current = newNode;
    }
  }

  return 0
}
