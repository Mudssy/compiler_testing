
#include <Availability.h>
#include <stdio.h>

void my_function() __attribute__((availability(macos, introduced=10.14, deprecated=12.0), availability(ios, introduced=13.0, deprecated=15.0)));

int main() {
    if (&my_function != NULL) {
        printf("Function is available\n");
    } else {
        printf("Function is not available\n");
    }
    return 0;
}
