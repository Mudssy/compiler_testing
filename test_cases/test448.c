
#include <stdio.h>

void do_something(int* p) __attribute__((nonnull));

void do_something(int *p){
    if (p == NULL){
        printf("This pointer is null!\n");
    } else {
        printf("The value of the pointer is: %d\n", *p);
    }
}

int main(){
    int x = 5;
    int* p = &x;
    do_something(p); //Should print "The value of the pointer is: 5"
    
    int* null_ptr = NULL;
    do_something(null_ptr); //Should print "This pointer is null!"
    
    return 0;
}
