
#include <stdio.h>
#include <fenv.h>

void fpe_handler(int except_type, int err_code) {
    printf("Floating Point Exception: ");

    switch (except_type) {
        case FE_INVALID: 
            printf("Invalid Operation\n"); 
            break;
        case FE_DIVBYZERO: 
            printf("Division by Zero\n"); 
            break;
        case FE_OVERFLOW: 
            printf("Overflow\n"); 
            break;
        case FE_UNDERFLOW: 
            printf("Underflow\n"); 
            break;
        default: 
            printf("Unknown Exception\n"); 
            break;
    }
}

int main() {
    // code here
}
