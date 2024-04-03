
#include <assert.h>
#define NDEBUG // Make assert active.

int main() {
    int x = 5;
    int y = 6;
    
    assert(x == 5);  // This should pass
    
    assert(y != 5);  // This should pass
    
    assert(x < 10);  // This should pass
    
    assert(y > 4);   // This should pass
    
    return 0;         // Ends program and returns 0 for success.
}
