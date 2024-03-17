
#include <stdio.h>

typedef struct BaseClass {
    int data;
} BaseClass;

void BaseClass_setData(BaseClass *base, int value) {
    base->data = value;
}

int BaseClass_getData(const BaseClass *base) {
    return base->data;
}

typedef struct DerivedClass {
    BaseClass base1;
    BaseClass base2;
} DerivedClass;

void DerivedClass_setData(DerivedClass *derived, int value1, int value2) {
    BaseClass_setData(&derived->base1, value1);
    BaseClass_setData(&derived->base2, value2);
}

int main() {
    DerivedClass derived;
    DerivedClass_setData(&derived, 50, 60);

    printf("Base data: %d %d\n", BaseClass_getData(&derived.base1), BaseClass_getData(&derived.base2));
}
