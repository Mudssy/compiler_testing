
#include <stdio.h>
 
typedef struct {
    void (*print)(void);
} Base;
 
typedef struct {
    Base base;
    int value;
} Derived;
 
void derived_print(void) {
    printf("Derived print function\n");
}
 
Base* create_base() {
    static Derived d = {{derived_print}, 42};
    return (Base*)&d;
}
 
int main(void) {
    Base* b = create_base();
    b->print();   // It should print "Derived print function"
    return 0;
}
