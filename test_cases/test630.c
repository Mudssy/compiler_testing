
#include <stdio.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

struct {
    unsigned int widthValidated : 1; // this is a one-bit wide bitfield member
    unsigned int heightValidated : 1; // this is also a one-bit wide bitfield member
} status2;

int main() {
    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf("Memory size occupied by status2 : %lu\n", sizeof(sizeof(status2)));

    // accessing bitfields
    status2.widthValidated = 0;
    printf("Width Validation: %u\n", status2.widthValidated);
    return 0;
}
