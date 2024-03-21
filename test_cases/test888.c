
#include <llvm-c/Remarks.h>
#include <stdio.h>
#include <stdlib.h>

static void handleRemark(const char *remark, void *data) {
    printf("Remark: %s\n", remark);
}

int main() {
    llvm::remarks::Parser Parser = llvm::remarks::createParser();
    
    // Add your own parsing logic here to add remarks
    const char *str1 = "Hello from Remark 1";
    const char *str2 = "Hello from Remark 2";
    Parser.addRemark(str1, strlen(str1));
    Parser.addRemark(str2, strlen(str2));
    
    llvm::remarks::ParsedStringBuffer RspBuf;
    RspBuf = Parser.parse();
    
    while (true) {
        char *remark = RspBuf.getNextStr(RspBuf);
        if (!remark) break;
        
        // Process this remark
        handleRemark(remark, NULL);
    }
    
    return 0;
}
