pp
#include <tuple>
#include <iostream>

struct MyStruct { int i; float f; };

int main() {
    MyStruct s = { 5, 3.2f };
    
    // Create tuple of references to the members of 's'
    auto tpl = std::tie(s.i, s.f);

    // Modify 's.i' and 's.f' through the references in 'tpl'
    std::get<0>(tpl) = 8;
    std::get<1>(tpl) = 4.5f;

    // Print out the values to make sure they match what was put into 'tpl'
    std::cout << "s.i: " << s.i << ", s.f: " << s.f << "\n";
    
    return 0;
}
