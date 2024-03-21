
#include <stdio.h>
#include <llvm-c/Remarks.h>  // Make sure the header file is included correctly for your system
 
int main() {
    int value = 0;
    llvm::remarks::RemarkStringTableRef Remarks;
    
    if (__builtin_expect(value == 1, 1)) {
        printf("Value is likely to be 1\n");
        
        char *remarkBuffer = malloc(256);
        sprintf(remarkBuffer, "Value was %d", value);
    
        Remarks.push_back(remarkBuffer); // This will fail because the API is not correct
    } else {
        printf("Value is likely to be 0\n");
        
        char *remarkBuffer = malloc(256);
        sprintf(remarkBuffer, "Value was %d", value);
    
        Remarks.push_back(remarkBuffer); // This will fail because the API is not correct
    }
  
    return 0;
}
