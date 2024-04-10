
#include <stdio.h>

// Removed unnecessary macro usage

int main() {
    int x = 5;
    double y = 5.0f;

    printf("%s\n", _Generic((x), int:"It's an integer", default:"It's not a number")); // Output: It's an integer
    printf("%s\n", _Generic((y), double:"It's a float", default:"It's not a number")); // Output: It's a float
}
