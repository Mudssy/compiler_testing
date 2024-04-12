
#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *handle;
    char (*func)(void);
    char *error;
    
    handle = dlopen("./module.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }
    
    func = dlsym(handle, "entry");
    error = dlerror();
    if (error != NULL) {
        fprintf(stderr, "%s\n", error);
        return 1;
    }
    
    char result = (*func)();
    printf("%c\n", result);

    dlclose(handle);
    return 0;
}
