
#include <stdio.h>

static int internal_var = 10; // static storage class
extern int external_var;     // extern storage class
int auto_var;               // no storage class specified, defaults to auto
register int reg_var;      // register storage class

void func(void) {
    auto int local_var = 20; // auto storage class
}

int main() {
    printf("internal_var: %d\n", internal_var);
    printf("external_var: %d\n", external_var);
    func();
    printf("auto_var: %d\n", auto_var);
    printf("register_var: %d\n", reg_var);

    return 0;
}
