
#include <stdio.h>

int main() {
    FILE *tmp = tmpfile();
    if (tmp == NULL) {
        printf("Failed to create temporary file\n");
        return 1;
    }
    
    char test_data[] = "Test data";
    fwrite(test_data, sizeof(char), sizeof(test_data), tmp);
    rewind(tmp);
    
    char read_buffer[sizeof(test_data)];
    if (fread(read_buffer, sizeof(char), sizeof(test_data), tmp) != sizeof(test_data)) {
        printf("Failed to read from temporary file\n");
        return 1;
    }
    
    fclose(tmp);
    
    if (strncmp(read_buffer, test_data, sizeof(test_data)) == 0) {
        printf("Write and read successful\n");
    } else {
        printf("Data mismatch\n");
    }
    
    return 0;
}
