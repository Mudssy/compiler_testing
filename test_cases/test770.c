
#include <stdio.h>
int main() {
    int i = 0;
    if(i == 0){
        printf("Test Case 1: '==' punctuator recognized\n");
    } else{
        printf("Test Case 1: FAILED!\n");
    }
    if(i != 0){
        printf("FAILED!\n");
    } else {
        printf("Test Case 2: '!=' punctuator recognized\n");
    }
}
