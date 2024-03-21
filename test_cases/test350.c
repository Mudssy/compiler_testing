
#include <stdio.h>
#include <stdlib.h>

// Assuming int128 is available, if not you may need to use a custom type or library
typedef __int128_t mytype; 

mytype pack(mytype a, mytype b) { return (a << 64) | b; }
void unpack(mytype x, mytype *a, mytype *b) {*a = x >> 64; *b = x & 0xFFFFFFFFFFFFFFFF;}

int main()
{
    mytype x = 1234567890;
    mytype y = 987654321;

    // Pack x and y into z
    mytype z = pack(x, y);
    
    printf("Packed value: %llx\n", (long long unsigned int)z);
    
    // Unpack z to get original values back
    mytype a, b;
    unpack(z, &a, &b);
    
    printf("Unpacked Values: a=%lld, b=%lld\n", (long long)a, (long long)b);
    
    return 0;
}
