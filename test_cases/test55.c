
#include <stdio.h>

enum Season {spring, summer, autumn, winter};

int main() {
    enum Season my_season = summer;
    switch(my_season) {
        case spring: printf("It's spring time."); break;
        case summer: printf("It's hot!"); break; // This will print out
        case autumn: printf("It's fall."); break;
        case winter: printf("It's cold!"); break;
    }
    return 0;
}
