
#include <stdio.h>

template<typename T, typename U> 
auto max(T t, U u) -> decltype(t > u ? t : u){
    return (t > u) ? t : u;
}

// Explicit specialization
template<>
char *max<char*, char*>(char *a, char *b){
    return strcmp(a, b) > 0 ? a : b;
}

int main() {
    printf("Max of 3 and 7 is %d\n", max(3, 7)); // integer version
    printf("Max of 'a' and 'b' is '%c'\n", max('a', 'b')); // char version
    printf("Max of \"Hello\" and \"World\" is \"%s\"\n", max("Hello", "World")); // string version 
}
