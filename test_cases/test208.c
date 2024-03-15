
#include <stdio.h>

int main() {
    printf("Start of program\n");
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
        // Insert code to be tested for the pragma feature here
        printf("Pragma feature test\n");
    #pragma clang diagnostic pop
    printf("End of program\n");
    return 0;
}
