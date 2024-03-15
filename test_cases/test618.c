
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t len;
    int arr[];
} FlexArrayStruct;

FlexArrayStruct* create_flexarray(size_t len) {
    FlexArrayStruct *flexarray = (FlexArrayStruct *) malloc(sizeof(FlexArrayStruct) + sizeof(int) * len);
    flexarray->len = len;
    return flexarray;
}

void print_flexarray(const FlexArrayStruct *flexarray) {
    for (size_t i = 0; i < flexarray->len; ++i) {
        printf("%d ", flexarray->arr[i]);
    }
    printf("\n");
}

int main() {
    FlexArrayStruct *flexarray = create_flexarray(5);
    for (size_t i = 0; i < flexarray->len; ++i) {
        flexarray->arr[i] = i * 2;
    }
    
    print_flexarray(flexarray);
    
    free(flexarray);
    
    return 0;
}
