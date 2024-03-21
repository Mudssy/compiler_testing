
#include <stdio.h>
#include <llvm/Remarks/RemarkFormat.h> // include necessary header files

int main() {
    const char *RemarkFormat = llvm::remarks::getYAMLRemarksVersionString(); // try to get remark format
    
    if (RemarkFormat != NULL) {  // feature is available
        printf("Hello World\n");
    } else {                    // feature not available
        printf("Feature not available\n");
    }

    return 0;                   // make sure it returns
}
