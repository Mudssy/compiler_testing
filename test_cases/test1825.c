
#include <assert.h>
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void do_add() {
    // This should cause a warning because 'b' is not initialized.
    int result = add(10, 20);
    __analyzer_dump(result);
}

int main() {
    do_add();
    
    return 0;
}
