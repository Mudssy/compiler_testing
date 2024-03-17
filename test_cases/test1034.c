
#include <stdio.h>

int main() {
    enum class BraceWrapping {
        Case1 = 0,
        Case2,
        Case3
    };

    BraceWrapping value = BraceWrapping::Case1;

    switch (value) {
        case BraceWrapping::Case1:
            printf("Case1\n");
            break;
        case BraceWrapping::Case2:
            printf("Case2\n");
            break;
        case BraceWrapping::Case3:
            printf("Case3\n");
            break;
    }

    return 0;
}
