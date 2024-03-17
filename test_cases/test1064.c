
#include <stdio.h>

int main() {
    int number = 5;
    char grade;

    switch (number) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        default:
            grade = 'D';
    }

    printf("The student's grade is %c\n", grade);

    return 0;
}
