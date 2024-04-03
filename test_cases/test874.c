
#include <stdio.h>
#include <llvm/Remarks/RemarkFormat.h> 

int main() {
    std::string RemarkFormat = llvm::remarks::getYAMLRemarksVersionString(); 
    
    if (!RemarkFormat.empty())  {  
        printf("Hello World\n");
    } else {                     
        printf("Feature not available\n");
    }

    return 0;                     
}
