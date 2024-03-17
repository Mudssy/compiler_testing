
#include <stdio.h>

enum Season {
    SPRING = 1,
    SUMMER,
    AUTUMN,
    WINTER
};

int main() {
    enum Season my_season;
    int season_number;
    
    printf("Enter a number (1-4) to represent a season: ");
    scanf("%d", &season_number);
    
    if(season_number >= SPRING && season_number <= WINTER){
        my_season = season_number;
        printf("You have entered the %d season which is: %s\n", season_number, (my_season == SPRING) ? "SPRING" : 
                                           (my_season == SUMMER) ? "SUMMER" : 
                                           (my_season == AUTUMN) ? "AUTUMN" : "WINTER");
    } else {
        printf("Invalid number entered. Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}
