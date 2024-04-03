
#include <stdio.h>

void print_values(int i) {
    printf("Value inside print_values function : %d\n", i);
}

int main() {
    static int s = 10;  // Static storage duration variable
    auto int a = 20;    // Automatic storage duration variable

    for(a=0; a<3; a++) {
        print_values(a);
    }

    printf("Value outside main function : %d\n", s);
    
    return 0;
}
