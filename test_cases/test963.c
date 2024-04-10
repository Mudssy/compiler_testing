pp
#include <stdio.h>
#include <typeinfo>
#include <string.h>
extern "C" const char* __cxa_demangle(const char*,char*,size_t*,int*);

void printType() {
    char buffer[1024];
    size_t length = 1024;
    int status;
    std::string s = typeid(*this).name();
    const char* mangledName = &s[0];
    if (__cxa_demangle(mangledName, buffer, &length, &status)) {
        printf("%s\n", buffer);
    } else {
        printf("Error: Unable to demangle the name '%s'\n", mangledName);
    }
}
