
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "This is source";
    char target[20];

    strncpy(target, source, sizeof(target));
    printf("Source: %s\n", source);
    printf("Target: %s\n", target);

    return 0;
}
