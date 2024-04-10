
#include <stdio.h>
#include <string.h>

int main() {
    char RemarkFormat[100] = "llvm::remarks::getYAMLRemarksVersionString"; 
    
    if (strlen(RemarkFormat) > 0)  {  
        printf("Hello World\n");
    } else {                     
        printf("Feature not available\n");
    }

    return 0;                     
}
