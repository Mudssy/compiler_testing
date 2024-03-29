
#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *handle;
    double (*cosine)(double);
    char *error;

    handle = dlopen("libm.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }

    cosine = dlsym(handle, "cos");
    error = dlerror();
    if (error != NULL) {
        fprintf(stderr, "%s\n", error);
        return 1;
    }

    printf("%f\n", (*cosine)(2.0));
    dlclose(handle);
    return 0;
}
