
#include <stdio.h>

struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 2;
} status1;

int main() {
    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));

    // Assigning some values to bit fields
    status1.widthValidated = 0;   // 0000 0000 = 0
    status1.heightValidated = 3;  // 0000 0011 = 3
    
    printf("status1 widthValidated : %d\n", status1.widthValidated);  // will print 0
    printf("status1 heightValidated: %d\n", status1.heightValidated); // will print 3
  
    // Modifying the bit fields
    status1.widthValidated = 1;   // 0000 0001 = 1
    status1.heightValidated = 2;  // 0000 0010 = 2
    
    printf("status1 widthValidated : %d\n", status1.widthValidated);  // will print 1
    printf("status1 heightValidated: %d\n", status1.heightValidated); // will print 2
  
    return 0;
}
