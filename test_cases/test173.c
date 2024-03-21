pp
#include <stdio.h>

template<typename T, typename U> struct is_same { static const bool value = false; };
template<typename T> struct is_same<T, T> { static const bool value = true; };

int main() {
    printf("%d\n", is_same<int, int>::value); // Should print 1 (true)
    printf("%d\n", is_same<int, float>::value); // Should print 0 (false)
    return 0;
}
