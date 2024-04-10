
#include <stdio.h>
#include <dlfcn.h>

// Function pointer type for dlopen_and_close function
typedef void (*dlopen_and_close_func)();

int main(void) {
    // Open the shared library
    void *handle = dlopen("./libshared.so", RTLD_LAZY);
    
    if (!handle) {
        fprintf(stderr, "dlopen failed: %s\n", dlerror());
        return 1; // Return non-zero to indicate error
    }
    
    // Get the address of the function we want to call
    dlopen_and_close_func func = (dlopen_and_close_func)dlsym(handle, "dlopen_and_close");
    
    if (!func) {
        fprintf(stderr, "dlsym failed: %s\n", dlerror());
        return 1; // Return non-zero to indicate error
    }
    
    // Call the function
    func();
    
    // Close the shared library
    if (dlclose(handle) < 0) {
        fprintf(stderr, "dlclose failed: %s\n", dlerror());
        return 1; // Return non-zero to indicate error
    }
    
    return 0;
}
