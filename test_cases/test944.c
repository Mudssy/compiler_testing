
#include <assert.h>
#define NDEBUG // Make assert active.

int main() {
    int x = 5;
    int y = 6;
    
    assert(x == y);  // This should fail
    
    assert(x != y);  // This should pass
    
    assert(x < y);   // This should pass
    
    assert(x > y);   // This should fail
    
    return 0;         // Ends program and returns 0 for success.
}
