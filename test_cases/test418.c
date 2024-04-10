
#include <assert.h>
#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Assertion Test 1\n");
    assert(x == 5); // This will fail as x is not equal to 5.
    printf("Execution continues past first assertion..\n");
    
    return 0;
}
