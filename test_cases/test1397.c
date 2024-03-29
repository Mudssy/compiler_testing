
#include <stdio.h>
#include "llvm-c/kaleidoscope.h"

int main(void) {
    const char *filename1 = "prof1.profraw";
    const char *filename2 = "prof2.profraw";
    const char *output_file = "merged_profile.profdata";
    
    __llvm_profile_write_file(filename1);
    __llvm_profile_merge_from_buffer(filename2, strlen(filename2));
    
    if(__llvm_profile_write_buffer_to_disk(output_file)){
        printf("Error writing to disk.\n");
        return 1; // Return error code.
    } else {
        printf("Merged profile data written successfully.\n");
        return 0;
    }
}
