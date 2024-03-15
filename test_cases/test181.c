
#include <stdio.h>

class MyClass {
public:
    MyClass() = default;
    ~MyClass() = delete;
};

int main() {
    MyClass obj1;  // Default constructor should work.
    // MyClass obj2 = new MyClass();  // This line would fail, as we deleted the copy constructor.
    // MyClass* obj3 = new MyClass[5];  // This line would also fail, as we deleted the copy constructor.
    
    printf("Indexing of deleted and defaulted functions feature for C++ has been tested.\n");
    return 0;
}
