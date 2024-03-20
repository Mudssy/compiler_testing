
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

__attribute__((error("This function is deprecated"))) 
void foo(void) {}

int main(void) {
    foo(); // This will always cause an error to be emitted.
    return 0;
}
