
#include <stdio.h>

void print_non_nullable(char * _Nonnull string) {
    printf("Non-Nullable: %s\n", string);
}

void print_nullable(char * _Nullable string) {
    if (string != NULL) {
        printf("Nullable: %s\n", string);
    } else {
        printf("Nullable: (null)\n");
    }
}

int main() {
    char non_null[] = "Hello, world!";
    print_non_nullable(non_null); // Expected to work fine
    
    char * nullable = NULL;
    print_nullable(nullable); // Expected to work fine
    
    print_non_nullable(NULL); // Expected to generate a warning or error
    
    return 0;
}
