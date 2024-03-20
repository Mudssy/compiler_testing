
#include <stdio.h>

typedef double distance;
distance operator "" _km(long double d) { return (double)d * 1000; }
distance operator "" _m(long double m) { return (double)m; }
distance operator "" _cm(long double c) { return (double)c / 100; }
distance operator "" _mm(long double mm) { return (double)mm / 1000; }

int main()
{
    distance d = 2.3_km + 5.6_m - 789_cm + 4567_mm;
    printf("Distance: %f meters\n", d);
    return 0;
}
