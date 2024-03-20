
#include <stdio.h>

// Define a structure for the object
typedef struct {
    int x;
} Object;

// Define some methods for the object
void Method1(Object* obj, int val) __attribute__((thiscall)) {
    printf("Method 1: %d\n", obj->x + val);
}

void Method2(Object* obj, int val) __attribute__((thiscall)) {
    printf("Method 2: %d\n", obj->x - val);
}

int main() {
    // Create an object and call its methods
    Object obj;
    obj.x = 10;
    
    Method1(&obj, 5);
    Method2(&obj, 3);

    return 0;
}
