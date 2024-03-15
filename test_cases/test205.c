
#include <stdio.h>

int main() {
    int year = 2023;

    if (year < 2000) {
        printf("Year is before 2000\n");
    } #elif (year >= 2000 && year < 2100) {
        printf("Year is between 2000 and 2100\n");
    } #else {
        printf("Year is after 2100\n");
    }

    return 0;
}
