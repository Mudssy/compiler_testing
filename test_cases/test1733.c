
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Employee;

void printEmployee(Employee emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
}

int main() {
    Employee emp1 = {1, "John Doe"};
    printEmployee(emp1);
    
    return 0;
}
