
#include <stdatomic.h>
 
_Static_assert(_Atomic(int)!=_Atomic(long), "atomic int and long have the same representation");
 
int main() {
    atomic_int i = 1;
    _Generic(i+5, atomic_int: sizeof, default: sizeof+1)(&i); // expands to sizeof(i) if i is atomic_int type
}
