
#include <iostream>
struct X {
    // Deleted function
    X() = delete;

    // Defaulted function
    X(int a) : i(a) {}

    int i;
};

int main(){
    // This line will cause compile error, because the default constructor is deleted.
    X x1;

    // This line will not cause any compiling errors.
    X x2(5);
    
    std::cout << "X's member variable i: "<< x2.i <<std::endl;
}
