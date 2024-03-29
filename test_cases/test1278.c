
#include <assert.h>
int main(){
    int x = -1;  // Assume this x is your assumption.
    assert(x>=0);  // If it's not true, program will stop here.
    printf("The assertion passed successfully.");
    return 0;  
}
