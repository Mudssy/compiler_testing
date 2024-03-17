
#include <stdio.h>

typedef enum {
    First_Value,
    Second_Value,
    Third_Value = 100,
    Fourth_Value,
} test;

int main() {
    printf("First_Value: %d\n", First_Value);
    printf("Second_Value: %d\n", Second_Value);
    printf("Third_Value: %d\n", Third_Value);
    printf("Fourth_Value: %d\n", Fourth_Value);
    
    return 0;
}
