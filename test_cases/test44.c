
#include <stdio.h>
#include <setjmp.h>

static jmp_buf env;

void second(int count) 
{
    longjmp(env, count+1);  // jump back to where setjmp was called - making the setjmp return count+1
}

void first (int count) 
{
    if (count == 0) {
        longjmp(env, 1);  // non-local goto - jump to a previously saved environment from setjmp()
    } else {
        printf("count=%d\n", count);  
        first(count-1);
    }
}

int main() 
{
    int result;
    
    switch (setjmp(env)) {
    case 0:   // initial setjmp call, returning 0
        first(10);  
        break;
    default:  // a longjmp was performed, returning count+1
        printf("long jump performed\n");
        result = -1;
        break;
    }
    
    printf("result=%d\n", result);

    return 0;
}
