
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct serializable {
    int length;
    char data[]; // This is the flexible array member
};

void print_serializable(struct serializable *s) {
    printf("Length: %d\n", s->length);
    
    for (int i = 0; i < s->length; i++) {
        printf("%c ", s->data[i]);
    }
    
    printf("\n");
}

struct serializable *create_serializable(char *str, int length) {
    struct serializable *s = malloc(sizeof(int) + sizeof(char) * length);
    s->length = length;
    memcpy(s->data, str, length);
    
    return s;
}

void free_serializable(struct serializable *s) {
    free(s);
}

int main() {
    struct serializable *s1 = create_serializable("Hello", 5);
    print_serializable(s1);
    
    struct serializable *s2 = create_serializable("World", 5);
    print_serializable(s2);
    
    free_serializable(s1);
    free_serializable(s2);
    
    return 0;
}
