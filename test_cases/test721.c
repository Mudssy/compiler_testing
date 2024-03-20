
#include <stdio.h>

int main() {
    void* lib = dlopen("libdl.so", RTLD_LAZY);
    if (!lib) {
        printf("Symbol versioning is not supported.\n");
        return 0;
    }
    
    const char *error = dlerror();
    if (error != NULL) {
        printf("%s\n", error);
        return 0;
    }

    void* sym = dlsym(lib, "dlopen");
    if (!sym) {
        printf("Symbol versioning is not supported.\n");
        return 0;
    }
    
    printf("Symbol versioning is supported.\n");
    return 0;
}
