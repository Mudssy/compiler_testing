
#include <stdio.h>

typedef struct {
    int x;
} my_type;

// Macro for generating function template
#define make_value(T) \
    T make_##T (int i) { \
        T result = { .x = i }; \
        return result; \
    }

make_value(my_type);  // Generate the my_type version of make_value

int main() {
    my_type value = make_my_type(5);
    printf("Value: %d\n", value.x);
    return 0;
}
