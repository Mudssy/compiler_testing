
// main.c
#include "checked_ptr.h"
#include <stdio.h>

typedef struct Node {
  int data;
  CHECKED_PTR(struct Node) next;
} Node;

Node* make_list() {
  // Create a linked list: 1 -> 2 -> 3
  Node nodes[3];
  for (int i = 0; i < 3; ++i) {
    nodes[i].data = i + 1;
    if (i < 2) nodes[i].next = &nodes[i+1];
    else nodes[i].next = NULL_CHECKED_PTR(Node);
  }
  return &nodes[0];
}

void print_list(Node* node) {
  for (; IS_VALID_CHECKED_PTR(node, Node);
       node = GET_POINTER_CHECKED_PTR(node->next, Node)) {
    printf("%d ", node->data);
  }
  printf("\n");
}

int main() {
  Node* list = make_list();
  print_list(list);
  return 0;
}
