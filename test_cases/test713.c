
#include <stdio.h>

#define MY_CUSTOM_ATTRIBUTE __attribute((annotate("my_custom_annotation")))

MY_CUSTOM_ATTRIBUTE void my_function() {
    printf("This function has a custom attribute!\n");
}

int main(void) {
#if __has_attribute(annotate)
    my_function();  // This should print out the message in `my_function`
#else
    puts("Your compiler does not support custom rewrite rules and scriptable transformations!");
#endif
    return 0;
}
