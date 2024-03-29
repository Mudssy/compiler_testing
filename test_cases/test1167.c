
#include <stdio.h>

int main() {
    FILE *file;
    int c;
    file = fopen("testfile.txt", "r");
    if (file) {
        while ((c = fgetc(file)) != EOF) {
            putchar(c);
        }
        fclose(file);
    }
    return 0;
}
