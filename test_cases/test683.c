
#include <stdio.h>

int main() {
    #pragma clanglibFrontendRewrite("TestPragmaFeature")
    printf("This message is generated with pragma directive for clanglibFrontendRewrite.\n");
    return 0;
}
