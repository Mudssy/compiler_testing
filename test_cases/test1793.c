
#include <stdio.h>

int main() {
    printf("This line should always execute.\n");
    
    // The following code will never be executed due to the return statement above.
    // This is unreachable code according to clang's Static Analyzer.
    printf("If this line executes, then there's a problem with clanglibStaticAnalyzer.\n");
    
    return 0;
}
