
#include <stdio.h>

enum week { sunday = 1, monday, tuesday, wednesday, thursday, friday, saturday };

int main() 
{
    enum week today;
    
    today = wednesday; // Enum variable initialization.
    
    printf("Day %d\n", today); // Printing the index of current day
    
    return 0;
}
