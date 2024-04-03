
#include <stdio.h>
int main() {
    int i = 0;
    __llvmlibProfileData profile_data = { .start = &i, .end = &i + 1 };
    printf("%d\n", profile_data.start[0]);
    return 0;
}
