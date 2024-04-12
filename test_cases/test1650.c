
#include <stdio.h>

typedef enum {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} Weekday;

int main() {
    for(Weekday day = Monday; day <= Sunday; ++day) {
        printf("Day %d\n", day);
    }

    return 0; // Make sure the program returns.
}
