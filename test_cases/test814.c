
#include <stdio.h>

int main() {
    enum { A = 5 };
    switch (A) {
        case 1+2: printf("One plus two equals three.\n"); break;
        case 3: printf("The value of the enumeration is three.\n"); break;
        default: printf("No match found.\n");
    }
    return 0;
}
