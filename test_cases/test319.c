
#include <stdio.h>

// The __attribute__((error("message"))) annotation indicates that this function is not allowed to return. 
void __attribute__((error("This function should never be called"))) 
func_that_shouldnt_be_called() {
    printf("This should never be printed\n");
}

int main() {
    func_that_shouldnt_be_called();
    return 0;
}
