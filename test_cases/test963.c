
#include <stdio.h>
#include <typeinfo>
extern "C" const char* __cxa_demangle(const char*,char*,size_t*,int*);

template<typename T> void printType() {
    char buffer[1024];
    size_t length = 1024;
    int status;
    if(__cxa_demangle(typeid(T).name(),buffer,&length,&status)) printf("Demangled: %s\n",buffer);
    else printf("%s\n",typeid(T).name());
}

int main() {
    printType<int>();
    return 0;
}
