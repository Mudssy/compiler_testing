
#include <stdio.h>

typedef void (*Lambda)(const char*);

void lambda(const char* str) {
    printf("Lambda function called from %s\n", str);
}

int main() {
    Lambda f = &lambda;
    
    // Call the lambda function with __func__
    (*f)(__func__);

    return 0;
}
