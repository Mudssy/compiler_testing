
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void) {
    struct flex_array {
        int size; 
        char data[];
    };
    
    const char test_data[] = "Hello, World!";
    struct flex_array *fa = (struct flex_array *)malloc(sizeof(struct flex_array) + sizeof(char)*strlen(test_data)); 
    
    strcpy(fa->data, test_data);

    printf("Original String: %s\n", fa->data);

    free(fa);
    return 0;
}
