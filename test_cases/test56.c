
#include <stdio.h>

typedef struct {
    int id;
    char name[50];
} Person;

int main() {
    Person person1 = { 1, "John Doe" };
    
    printf("Person ID: %d\n", person1.id);
    printf("Person Name: %s\n", person1.name);

    return 0;
}
