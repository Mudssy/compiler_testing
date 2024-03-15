
#include <stdio.h>

template<typename T>
struct S {
    void f() { printf("General template\n"); }
};

template<>
void S<int>::f() { printf("Specialization for int\n"); }

template<typename T>
struct S<T*> {
    void f() { printf("Partial specialization for pointers\n"); }
};

int main() {
    S<double> s1;
    s1.f();

    S<int> s2;
    s2.f();

    int i = 5;
    S<decltype(i)> s3;
    s3.f();

    return 0;
}
