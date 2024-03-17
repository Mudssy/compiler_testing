
#include <stdio.h>

void foo() noexcept {}
void bar() {}

int main(){
    if(noexcept(foo())) printf("Function foo is marked as noexcept.\n");
    else printf("Function foo is not marked as noexcept.\n");
    
    if(noexcept(bar())) printf("Function bar is marked as noexcept.\n");
    else printf("Function bar is not marked as noexcept.\n");
    
    return 0;
}
