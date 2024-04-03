
#include <stdio.h>

long double kg_to_g(long double x) { return x * 1000; }
long double g_to_kg(long double x) { return x / 1000; }

int main() {
    long double weight = 2.5L; /* User input or any value */

    printf("Weight in kg: %Lf\n", g_to_kg(weight));
    printf("Weight in g : %Lf\n", kg_to_g(weight));
    
    return 0;
}
