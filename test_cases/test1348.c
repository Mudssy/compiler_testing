
#include <stdio.h>
#include <dlfcn.h>

typedef void (*func)();

int main() {
    void *handle;
    func function;
    char *error;

    handle = dlopen("./path_to_shared_library/libname.so", RTLD_LAZY);
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

    (*function)();
    dlclose(handle);

    return 0;
}
