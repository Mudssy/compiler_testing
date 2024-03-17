
#include <stdio.h>

int _Nullable func(_Nonnull int *p1, _Nullable int *p2) {
    if (p1 == NULL) return 0;
    else if (p2 == NULL) return 1;
    else return 2;
}

int main() {
    printf("Value: %d\n", func(NULL, NULL));
    return 0;
}
