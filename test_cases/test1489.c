
#include <stdio.h>

int main() {
    int a = 1;
    int b = 0;
    
    if (a && b) printf("AND operator works\n");
    else printf("AND operator doesn't work\n");
    
    if (a || b) printf("OR operator works\n");
    else printf("OR operator doesn't work\n");
    
    if (!b) printf("NOT operator works\n");
    else printf("NOT operator doesn't work\n");
    
    return 0;
}
