
#include <stdio.h>

int main() {
    char punctuator = '+'; // Change this to test different punctuators
    
    switch (punctuator) {
        case '.': printf("Dot Operator\n"); break;
        case ',': printf("Comma Operator\n"); break;
        case ':': printf("Colon Operator\n"); break;
        case ';': printf("Semicolon Operator\n"); break;
        case '?': printf("Conditional Operator\n"); break;
        default: printf("Unknown punctuator\n"); break;
    }
    
    return 0;
}
