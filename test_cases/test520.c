
#include <stdio.h>
#include <sanitizer/shadow_call_stack.h>

void test() {
    printf("This is a test.\n");
}

int main(int argc, char **argv) {
    void *top;
    if (__sanitizer_get_total_unique_caller_callee_pairs(&top)) {
        ((void (*)(void))((uintptr_t)top + sizeof(uintptr_t)))();
    } else {
        printf("No caller-callee pairs found.\n");
    }

    return 0;
}
