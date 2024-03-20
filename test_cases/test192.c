
#include <stdio.h>
#include <limits.h>
#include <assert.h>

template<typename T>
concept SignedIntegral = sizeof(T) == sizeof(int) && std::is_signed<T>::value;

template<SignedIntegral T, typename U>
constexpr bool sum_in_range(T a, U b) {
    return (b >= INT_MIN - a && b <= INT_MAX - a);
}

void test() {
    assert(sum_in_range((char)-10, (int)INT_MAX));
    assert(!sum_in_range((unsigned char)-2, (int)-1));
    printf("Test passed\n");
}

int main() {
    test();
    return 0;
}
