
#include <stdio.h>

typedef struct {
    int x;
} my_type;

template<typename T>
T make_value(int i) {
    T result = { .x = i };
    return result;
}

int main() {
    my_type value = make_value<my_type>(5);
    printf("Value: %d\n", value.x);
    return 0;
}
