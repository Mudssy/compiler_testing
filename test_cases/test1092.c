
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        for (int i = 0; i < argc; ++i) {
            printf("BinPack Arguments: %s\n", argv[i]);
        }
    } else {
        printf("No BinPack Arguments provided.\n");
    }
    return 0;
}
