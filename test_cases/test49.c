
#include <stdio.h>

int global_var = 10;

void update_global() {
    global_var += 5;
}

int main() {
    printf("Global variable before function call: %d\n", global_var);
    
    update_global();

    printf("Global variable after function call: %d\n", global_var);

    return 0;
}
