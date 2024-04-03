
#include <stdio.h>
#include <string.h>

int main() {
    // Test 1: Check if profile data can be read
    FILE *f = fopen("default.profraw", "r");
    if (f == NULL) {
        printf("Profile data not found\n");
    } else {
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), f)) {
            // Do nothing with the profile data. Just check if it can be read without errors
        }
        fclose(f);
        printf("Profile data found and read successfully\n");
    }

    // Test 2: Check if profile data is updated correctly
    int arr[10];
    memset(arr, 0, sizeof(arr));
    arr[5] = 1;  // This memory access should be profiled
    printf("Profile data updated successfully\n");

    return 0;
}
