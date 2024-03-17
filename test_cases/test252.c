
#include <stdio.h>

long double operator "" _km(long double k) { return k * 1000; }
long double operator "" _m(long double m) { return m; }

int main() {
    long double distance_in_km = 25.36_km;
    printf("Distance in meters: %Lf\n", distance_in_km);
    
    long double distance_in_m = operator"" _m(distance_in_km);
    printf("Distance in kilometers: %Lf\n", distance_in_m / 1000.0);
    
    return 0;
}
