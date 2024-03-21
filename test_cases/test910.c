
#include <llvm-c/Core.h>
#include <llvm-c/Remarks.h>
#include <stdio.h>

// Callback function for handling remarks
static void handleRemark(const char *remark, void *userData) {
    printf("Received remark: %s\n", remark);
}

int main() {
    // Create a remark parser
    LLVMRemarkParserRef parser = LLVMCreateRemarkParser();
    
    // Set the callback function for handling remarks
    LLVMRemarkParserSetHandler(parser, handleRemark, NULL);
    
    // Parse some optimization remarks
    const char *remarks[] = {
        "--- !Passed",
        "Pass: inline",
        "Name: FunctionInliningPass",
        "",
        "Function : _Z3fooi (i32)",
        "Source Location: /path/to/file.c:47:0"
    };
    
    for (size_t i = 0; i < sizeof(remarks) / sizeof(*remarks); ++i) {
        if (!LLVMRemarkParserHasError(parser)) {
            LLVMParseRemark(parser, remarks[i], strlen(remarks[i]));
        } else {
            printf("Failed to parse remark: %s\n", remarks[i]);
        }
    }
    
    // Clean up resources
    LLVMDisposeRemarkParser(parser);
}
