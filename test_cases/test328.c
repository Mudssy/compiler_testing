
#ifndef __has_attribute // Check if __has_attribute is defined
#define __has_attribute(x) 0 // If not, define it as 0
#endif

#if __has_attribute(unavailable) && !defined(__clang__) // Check if the 'unavailable' attribute exists and compiler isn't clang
#error "The unavailable API feature is not supported by this compiler." // Report error if unavailable feature is not supported
#endif

__attribute__((unavailable)) int foo() { return 0; } // Mark function as unavailable

int main() {
    foo(); // Use the unavailable function to generate a compile-time error
}
