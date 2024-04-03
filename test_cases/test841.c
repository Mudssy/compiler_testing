
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* _Atomic restrict next; // Using restricted pointers
} Node;

int main() {
    Node *p = malloc(sizeof(Node));
    if (p == NULL) return 1;
    
    p->data = 0;
    p->next = NULL;
    
    free(p);
    return 0;
}
