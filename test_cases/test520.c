
#include <stdio.h>
#include <sanitizer/dfsan_interface.h>

void target(int a, int b) {
    printf("Target called with arguments: %d and %d\n", a, b);
}

int main() {
    // Initialize data for dfsan
    const dfsan_label label = dfsan_create_label("label1", 0);
    int x, y;
    dfsan_set_label(label, &x, sizeof(x));
    dfsan_set_label(label, &y, sizeof(y));

    // Call target function with arguments tainted with the label.
    target(x, y);

    return 0;
}
