
#include <stdio.h>

int main() {
    // Testing Compound Literals
    struct point { int x; int y; } *p;
    p = &(struct point){ .x = 1, .y = 2 };
    printf("Point: (%d, %d)\n", p->x, p->y); // Should print "Point: (1, 2)"

    // Testing flexible array members
    int size = 5;
    struct s {
        int i;
        char a[];
    };
    struct s *s = malloc(sizeof(struct s) + sizeof(char)*size);
    for (int i=0; i<size; i++)
        s->a[i] = 'A'+i; // Should print "ABCDE"
    printf("Flexible array: %s\n", s->a);
    
    return 0;
}
