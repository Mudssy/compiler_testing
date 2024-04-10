
#include <stdio.h>

void __llvm_profile_initialize_file(void); // Declare the function prototype
int main() {
    char filename[20] = "testfile"; // Increased size of array to accommodate longer filenames
    
    FILE *fp;
    fp = fopen(filename, "w"); // Open the file for writing
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1; // Return immediately after encountering an error
    }

    __llvm_profile_initialize_file(); // Initialize profiling function
    
    fprintf(fp, "%s", "test"); // Write to the file
    
    fclose(fp); // Close the file when done with it

    return 0;
}
