
#include <stdio.h>

void func() {
    static int count = 0; // This variable retains its value even after the function is removed from stack.
    printf("%d\n",count);
    count++;
}

int main(){
    for(int i=0;i<10;i++) func(); 
    return 0; // Main function should always return an integer in C programming language.
}
