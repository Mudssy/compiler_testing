
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x, y;
    printf("Enter two numbers:\n");
    
    if(scanf("%lf %lf", &x, &y) != 2){
        fprintf(stderr, "Invalid input\n");
        return 1; // Returning non-zero indicates an error in Unix systems.
    }

    printf("The results are:\n");
    if (x >= y) {
        printf("%lf\n", cosh(2*y));
    } else {
        printf("%lf\n", log(x+y));
    }

    return 0; // Returning zero indicates successful execution.
}
