
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *handle;
    double (*cos_func)(double);
    char *error;
    
    handle = dlopen("libm.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }
    
    cos_func = (double (*)(double)) dlsym(handle, "cos");
    if ((error = dlerror()) != NULL) {
        fprintf(stderr, "%s\n", error);
        exit(EXIT_FAILURE);
    }
    
    double result = cos_func(3.14);
    printf("Result: %f\n", result);
    
    dlclose(handle);
    
    return 0;
}
