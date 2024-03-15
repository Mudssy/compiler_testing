
#include <stdio.h>

int main() {
    int x = 5;
    printf("The value of x is: %d\n", x);

    // deprecated code using K&R style function definition
    int old_style_function(a, b)
        int a, b;
    {
        return a + b;
    }

    printf("The result from the deprecated code is: %d\n", old_style_function(2, 3));

    // modern equivalent code using standard function definition
    int new_style_function(int a, int b) {
        return a + b;
    }

    printf("The result from the modern code is: %d\n", new_style_function(2, 3));

    return 0;
}
