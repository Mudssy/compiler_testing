
#include <stdio.h>
int main() {
    // Define an enumerated type
    typedef enum {
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY, 
        SUNDAY
    } day;
    
    // Declare a variable of the enumerated type
    day today = MONDAY;
    
    printf("Today is %d\n", today);
    
    return 0;
}
