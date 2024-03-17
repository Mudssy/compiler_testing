
#include <stdio.h>

void func(int* x) {
    printf("Type reference identification successful\n");
}

int main() {
    int num = 5;
    int *ptr = &num;
    
    func(ptr);  // This will print the message "Type reference identification successful"
    
    return 0;
}
