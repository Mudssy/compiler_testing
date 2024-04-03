
#include <stdio.h>
int main() {
    int अ१२३ = 123; // a valid C identifier with unicode characters
    printf("%d\n", अ१२३); // should print 123 if the compiler supports unicode identifiers
    return 0;
}
