
#include <stdio.h>

void recursive(int count) {
    char a[1024*500]; // Allocating large amount of stack memory
    printf("%d\n",count); 
    recursive(count+1); // Recursion which might lead to stack overflow
}

int main() {
    recursive(1);
    return 0;
}
