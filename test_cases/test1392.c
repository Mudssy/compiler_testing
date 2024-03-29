
#include <stdio.h>

int main() {
    int sum = 0;
    for(int i=1; i<=100; i++){
        if(i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if(i % 3 == 0) {
            printf("Fizz\n");
        } else if(i % 5 == 0) {
            printf("Buzz\n");
        } else {
            sum += i;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
