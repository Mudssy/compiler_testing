
#include <stdio.h>
#include <stdlib.h> // required for strtoul
#include <errno.h>  // required for errno and EINVAL

int main() {
    char* pEnd;  // used to store the end pointer returned by strtoul
    const char *str = "123456789";
    
    printf("Base   Value\n");

    for (int base = 2; base <= 36; ++base) {
        errno = 0;  // reset error number before calling strtoul
        
        unsigned long value = strtoul(str, &pEnd, base);

        if (errno == EINVAL) {
            printf("error\n");
            continue;
        } else if (*pEnd != '\0') {  // if there are non-numeric characters left in the string that were not converted
            printf("error\n");
        } else {  // conversion successful, print out the value
            printf("%2d     %lu\n", base, value);
        }
    }
}
