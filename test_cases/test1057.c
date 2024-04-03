
#include <stdio.h>

struct S {
    char c;
    int n alignas(4);  // Align 'n' to multiples of 4 bytes
};

int main() {
    struct S s = {'a', 10};
    
    // Check if address is divisible by 4, the size of an integer.
    // If it is not, then we failed alignment.
    int diff_n_c = (unsigned char*)&s.n - (unsigned char*)&s;
    if(diff_n_c % sizeof(int) != 0){
        printf("Failed to align 'n' properly.\n");
    } else {
        printf("Address of 'c': %p, Address of 'n': %p\n", &s.c, &s.n);
        printf("Difference in byte: %d\n", diff_n_c);
    }
    
    return 0;
}
