
#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(int count) {
    printf("inside second()\n");
    longjmp(buf, count+1);  
}

void first(int count) {
    if (count > 0) { 
        printf("inside first()\n");
        first(--count);
    } else { 
        second(count); 
    }
}

int main() {
    volatile int count = 2; /* To prevent optimizations */
    if (setjmp(buf)) {
       printf("Program terminates normally\n");
       return 0;
    }
    first(count); 
    return 0;
}
