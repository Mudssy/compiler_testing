
#include <stdio.h>

int swift_renamed_function() __attribute__((swift_name("someSwiftFunction()")));

int swift_renamed_function() {
    int someVariable __attribute__((swift_name("someSwiftVariable"))) = 42;
    return someVariable;
}

int main() {
    int result = swift_renamed_function();
    printf("Result: %d\n", result);
    return 0;
}
