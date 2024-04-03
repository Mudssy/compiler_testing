
#include <stdio.h>

int main() {
    if (1) {  // This will always be true so no compiler errors will occur
        printf("No Error Detected!\n");
     } else {
        printf("Error! \n");
     }
    return 0;
}
