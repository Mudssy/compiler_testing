
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"John", 20};
    
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", s1.age);

    return 0;
}
