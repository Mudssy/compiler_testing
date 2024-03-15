
#include <stdio.h>

typedef struct {
    int id;
} Object;

Object objArr[5];

void __attribute__((constructor)) init() {
    for (int i = 0; i < 5; ++i) {
        objArr[i].id = i + 1;
    }
}

void __attribute__((destructor)) cleanup() {
    for (int i = 0; i < 5; ++i) {
        printf("Object %d destroyed\n", objArr[i].id);
    }
}

int main() {
    for (int i = 0; i < 5; ++i) {
        printf("Object %d initialized\n", objArr[i].id);
    }
    return 0;
}
