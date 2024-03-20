
#include <stdatomic.h>

struct Shared {
    atomic_int lock;
};

void f(struct Shared* shared) {
    while (atomic_exchange(&shared->lock, 1) == 1) {}
    
    // critical section
    
    atomic_store(&shared->lock, 0);
}

int main() {
    struct Shared shared = { .lock = 0 };
    f(&shared);
    
    return 0;
}
