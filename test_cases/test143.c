
#include <stdio.h>

enum {
  SUNDAY = 0,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

int main() {
  int day_of_the_week = 3; // Change this value to test different days.

  switch (day_of_the_week) {
    case SUNDAY:
      printf("Sunday\n");
      break;
    case MONDAY:
      printf("Monday\n");
      break;
    case TUESDAY:
      printf("Tuesday\n");
      break;
    case WEDNESDAY:
      printf("Wednesday\n");
      break;
    case THURSDAY:
      printf("Thursday\n");
      break;
    case FRIDAY:
      printf("Friday\n");
      break;
    case SATURDAY:
      printf("Saturday\n");
      break;
    default:
      printf("Invalid day.\n");
  }

  return 0;
}
