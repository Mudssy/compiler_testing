
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Person;

int main() {
    Person *person = (Person *) malloc(sizeof(Person));
    if (person == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    person->id = 1;
    strcpy(person->name, "John Doe");

    printf("Person ID: %d\n", person->id);
    printf("Person Name: %s\n", person->name);

    free(person);
    return 0;
}
