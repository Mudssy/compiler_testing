
#include <stdio.h>

int main(void) {
    int (*func_ptr)(const char *);
    static const struct {
        const char *name;
        int (*func)(const char *);
    } table[] = {
        {"print", (int(*)(const char *))puts},
        {}
    };

    func_ptr = table[0].func;  /* lambda expression indexing */

    if(func_ptr("Lambda Works")) {
        return 1;
    } else {
        printf("Lambda Does Not Work\n");
        return 0;
    }
}
