
#include <stdio.h>

int main() {
    FILE *output_file;

    output_file = fopen("compiler_test_output.txt", "w");

    if (output_file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(output_file, "Testing compiler's clanglibDriver section feature.\nThis is a test output from the generated C program.\n");
    fclose(output_file);

    return 0;
}
