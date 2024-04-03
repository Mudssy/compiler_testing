pp
#include <stdio.h>
#include <typeinfo>
#include <stdlib.h>
extern "C" const char* __cxa_demangle(const char*,char*,size_t*,int*);

void printType() {
    char buffer[1024];
    size_t length = sizeof(buffer); // correct the size of the buffer
    int status;
    
    const char* mangledName = typeid(int).name();
    const char* demangledName = __cxa_demangle(mangledName, buffer, &length, &status);
    
    if (status == 0) {
        printf("Type: %s\n", demangledName);
    } else {
        fprintf(stderr, "Could not demangle type name.\n");
        exit(EXIT_FAILURE);
    }
}

int main() {
    printType();
    return 0;
}
