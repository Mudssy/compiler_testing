
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[1024];
    
    for (int i = 0; i < 1024; ++i) {
        buffer[i] = 'a' + (i % 26);
    }
    
    FILE* file = fopen("profiling.txt", "w"); // Open the file in write mode
    if(file == NULL){
       printf("Error opening file! Exiting program.\n");
       return -1; // or handle error as needed
    }
    
    fwrite(buffer, sizeof(char), 1024, file);  // Write the buffer data to the profiling file
    fclose(file); // Close the file after writing is done

    printf("File write successful! Check profiling.txt for data.\n");
    
    return 0;
}
