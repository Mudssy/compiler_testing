
#include <stdio.h>

int main() {
    enum Example {
        VALUE1,
        VALUE2
    };

    int result = 0;

    switch (VALUE2) {
        case VALUE1:
            result++;
            break;
        case VALUE2:
            result--;
            break;
    }

    if (result == -1) {
        printf("Break before braces in enums feature supported.\n");
    } else {
        printf("Break before braces in enums feature not supported.\n");
    }

    return 0;
}
