
#include <stdio.h>

void f() { printf("Hello, world!\n"); }

template<typename T>
struct S {
    void g(T t) {
        t();
    }
};

int main() {
    S<decltype(f)> s;
    s.g(f);
}
