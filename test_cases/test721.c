
#include <stdio.h>
#include <dlfcn.h>

int main() {
    void* lib = dlopen("libdl.so", RTLD_LAZY);
    
    if (!lib) {
        printf("%s\n", dlerror());
        return 0;
    }
    
    void* sym = dlsym(lib, "dlopen");
    
    if (!sym) {
        printf("%s\n", dlerror());
        return 0;
    }
    
    int (*func)(const char*, int) = (int (*)(const char*, int)) sym;
    
    void* handle = func("libdl.so", RTLD_LAZY);
    
    if (!handle) {
        printf("%s\n", dlerror());
        return 0;
    }
    
    printf("Opened library successfully!\n");
    
    dlclose(lib);
    dlclose(handle);
   
    return 0;
}
