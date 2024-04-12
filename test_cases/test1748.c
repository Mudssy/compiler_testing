
#include <stdio.h>

struct test {
    unsigned int x: 2; // assuming that int is 32 bits and char is 8 bits
    unsigned int y: 3;
    unsigned int z: 30;
};

int main()
{
    struct test t = {2, 5, 1000000};
    
    printf("sizeof(struct test) = %zu\n", sizeof(struct test)); // should print 4
    printf("t.x = %d, t.y = %d, t.z = %d\n", t.x, t.y, t.z); // should print "2 5 1000000"
    
    return 0;
}
