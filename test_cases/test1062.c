
#include <stdio.h>

int main() {
    enum Color { RED, GREEN, BLUE };
    
    switch(BLUE) {
        case RED: printf("RED\n"); break;
        case GREEN: printf("GREEN\n"); break;
        case BLUE: printf("BLUE\n"); break;
        default: printf("Unknown color\n");
    } 
    
    return 0;
}
