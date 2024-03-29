
#include <stdio.h>
#include <dlfcn.h>

int main(void) {
    void *handle = dlopen("/path/to/shared_lib1", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error: %s\n", dlerror());
        return 1;
    }

    typedef void (*func)(void);
    func function = (func)dlsym(handle, "function_to_call");
    char *error = dlerror();
    if (error != NULL) {
        fprintf(stderr, "Error: %s\n", error);
        return 1;
    }

    function();
    dlclose(handle);

    handle = dlopen("/path/to/shared_lib2", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error: %s\n", dlerror());
        return 1;
    }

    function = (func)dlsym(handle, "function_to_call");
    error = dlerror();
    if (error != NULL) {
        fprintf(stderr, "Error: %s\n", error);
        return 1;
    }

    function();
    dlclose(handle);

    return 0;
}
