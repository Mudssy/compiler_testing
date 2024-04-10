
#include <stdio.h>
#include "llvm/ProfileData/InstrProfReader.h"

int main() {
    extern void* CreateLLVMProfileReader(const char*, int);
    
    const char* name = "test";
    int id = 0;
    void *reader = CreateLLVMProfileReader(name, id);
    // do something with reader...
}
