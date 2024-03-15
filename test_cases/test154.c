
#include <stdio.h>
#define NUM_MEMBERS 5

struct TestStruct {
    int a;
    float b;
    double c;
    char d[20];
    long e;
};

int main() {
    struct TestStruct testObj;
    
    testObj.a = 10;
    testObj.b = 3.14f;
    testObj.c = 3.14159265358979323846;
    sprintf(testObj.d, "Hello, World!");
    testObj.e = 1000000000;
    
    printf("Member a: %d\n", testObj.a);
    printf("Member b: %.2f\n", testObj.b);
    printf("Member c: %.15lf\n", testObj.c);
    printf("Member d: %s\n", testObj.d);
    printf("Member e: %ld\n", testObj.e);
    
    return 0;
}
