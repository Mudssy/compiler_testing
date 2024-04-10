
#include <stdio.h>
#include <inttypes.h>

void write_profile() {
    FILE* file = fopen("default.profraw", "w");
    if (file == NULL) {
        printf("Failed to open %s\n", "default.profraw");
        return;
    }
    // Write your profiling data here...
    fclose(file);
}

int main() {
    write_profile();
    return 0;
}
