
#include <stdio.h>
#include <dlfcn.h>

typedef void (*func)();  // Define type for dlopen/dlsym functions

int main(void) {
    void *handle;
    char *error;
    func dlopen_and_close;

    // Open the shared library
    handle = dlopen("./libtest.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "dlopen failed: %s\n", dlerror());
        return 1;   // Return non-zero to indicate an error occurred.
    }

    // Clear any existing error
    dlerror();

    // Get the function address from the library
    *(void **) (&dlopen_and_close) = dlsym(handle, "dlopen_and_close");
    if ((error = dlerror()) != NULL)  {
        fprintf(stderr, "dlsym failed: %s\n", error);
        return 1;   // Return non-zero to indicate an error occurred.
    }

    // Call the function in the library and check the return value
    (*dlopen_and_close)();

    // Close the shared library
    dlclose(handle);

    return 0;   // Return zero to indicate success.
}
