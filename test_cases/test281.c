
#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *handle;
    int (*func)(int, int);
    char *error;

    handle = dlopen("./libsample.so", RTLD_LAZY);
    if (!handle) {
        fputs(dlerror(), stderr);
        return 1;
    }

    func = dlsym(handle, "add");
    if ((error = dlerror()) != NULL)  {
        fprintf(stderr, "%s\n", error);
        return 2;
    }

    printf("%d\n", (*func)(1, 2));
    
    dlclose(handle);
    return 0;
}
