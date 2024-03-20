
#include <stdio.h>

int main() {
    char array[5] = {'a', 'b', 'c', 'd', '\0'};
    
    printf("First element: %c\n", array[0]);   //should print a
    printf("Second element: %c\n", array[1]);  //should print b
    printf("Third element: %c\n", array[2]);   //should print c
    printf("Fourth element: %c\n", array[3]);  //should print d
    printf("Fifth element (null character): %c\n", array[4]);  //should print nothing or a new line
    
    return 0;  //Ends the program successfully
}
