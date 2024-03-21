
#include <stdio.h>

#if __has_feature(memory_sanitizer)
__attribute__((used)) const char *__llvm_profile_runtime = "Hello World";
#endif

void __attribute__((optnone)) HelloWorld() {
    printf("Hello, World!\n");
}

int main() {
#if __has_feature(memory_sanitizer)
    // Use the function to ensure it's not optimized away.
    HelloWorld();
#endif

    return 0;
}
