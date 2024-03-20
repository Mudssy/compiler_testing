
#include <stdio.h>

typedef struct Person {
    char name[20];
    int age;
} Person;

void print_person(Person p) {
    printf("Name: %s, Age: %d\n", p.name, p.age);
}

int main() {
    Person person1 = {"Alice", 25};
    Person person2 = {"Bob", 30};
    
    print_person(person1);
    print_person(person2);
    
    return 0; // Returning from the program will ensure it doesn't run forever.
}
