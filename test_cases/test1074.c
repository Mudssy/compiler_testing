
#include <stdio.h>

int main() {
    int a;
    // The feature being tested is here: Assignment before operator
    printf((a = 2) ? "Assign and then evaluate" : "Fail"); 
    return 0;
}
