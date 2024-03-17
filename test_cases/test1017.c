
#include <stdio.h>

typedef struct {
    int pubVar;
private:
    int privVar;
protected:
    int protVar;
} TestClass;

int main() {
    TestClass t;
    t.pubVar = 10;
    //t.privVar = 20; // This line should cause a compilation error if the access specifiers feature is working properly
    //t.protVar = 30; // This line should also cause a compilation error if the access specifiers feature is working properly

    printf("Public variable: %d\n", t.pubVar);
    return 0;
}
