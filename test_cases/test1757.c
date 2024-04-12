
#include <stdio.h>
#include <string.h>

typedef struct {
    int x;
} StructType;

typedef union {
    int y;
} UnionType;

void print_struct(StructType* s) { printf("x: %d\n", s->x); }
void print_union(UnionType* u) { printf("y: %d\n", u->y); }

int main() {
    StructType s = { .x = 10 };
    UnionType u = { .y = 20 };
    
    void (*print_fptr)(void*) = NULL;
    
    print_fptr = (void(*))&print_struct;
    (*print_fptr)((void*)&s); // Print struct
    
    print_fptr = (void(*))&print_union;
    (*print_fptr)((void*)&u); // Print union
    
    return 0;
}
