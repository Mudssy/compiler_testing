
#include <llvm-c/Remarks.h>
#include <stdio.h>
#include <string.h>

int main() {
    // Create a parser
    LLVMRemarkParserRef parser = LLVMCreateRemarkParser();
    
    // Define the remarks
    char *remarks[] = {
        "remark type: remark",
        "pass: module-inline",
        "function: f",
        "type: 3fooi (i32)",
        0
    };
    
    for (int i = 0; remarks[i] != 0; ++i) {
        if (!LLVMRemarkParserHasError(parser)) {
            LLVMParseRemark(parser, remarks[i], strlen(remarks[i]));
        } else {
            printf("Error parsing remark: %s\n", LLVMGetLastError());
            return 1; // Exit with an error status code
        }
    }
    
    // Cleanup and memory management
    LLVMDisposeRemarkParser(parser);
    
    printf("All remarks parsed successfully!\n");
    return 0;
}
