
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattributes"
__attribute__((externally_visible)) void visibleFunction() {
    printf("This function is externally visible.\n");
}
#pragma GCC diagnostic pop

int main() {
    visibleFunction(); // This should print "This function is externally visible." 
                      // If the attribute isn't supported, it will not compile.
    return 0; // This ensures that the program does not run forever and returns.
}
