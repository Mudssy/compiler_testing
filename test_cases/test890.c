
#include <stdio.h>
int main() {
    FILE *file = fopen("default.profraw", "w");
    if (file != NULL) {
        char data[4] = {0x1, 0x2, 0x3, 0x4};
        size_t written = fwrite(data, sizeof(char), sizeof(data)/sizeof(char), file);
        if (written != sizeof(data)/sizeof(char)) {
            printf("Error writing profile data\n");
        }
    } else {
        printf("Unable to open profile file for writing\n");
    }
}
