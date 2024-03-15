
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int val;
} int_t;

int_t arr1[10];
int_t arr2[10];

void generateShuffleVectors(int_t *arr1, int_t *arr2) {
    srand((unsigned int) time(NULL));
    for (int i = 0; i < 10; i++) {
        arr1[i].val = rand() % 100 + 1;
        arr2[i].val = rand() % 100 + 1;
    }
}

void printShuffleVectors(int_t *arr1, int_t *arr2) {
    for (int i = 0; i < 10; i++) {
        printf("arr1[%d]: %d\n", i, arr1[i].val);
        printf("arr2[%d]: %d\n", i, arr2[i].val);
    }
}

int main() {Here's a simple C program that generates and prints shuffled vectors. The only thing you need to add is the definition for `int_t`.

