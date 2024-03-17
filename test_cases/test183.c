
#include <stdio.h>

int main() {
    int condition1[] = {1};
    int condition2[] = {0, 1};
    
    printf("%s\n", condition1[0] ? "One" : (condition2[1] ? "Two" : "None"));
    
    return 0;
}
