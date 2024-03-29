
#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    int ret;
    
    /* Compile regular expression */
    ret = regcomp(&regex, "^[a-z]+$", 0);
    if (ret) {
        printf("Could not compile regex\n");
        return -1; // or handle error appropriately
    }

    /* Execute regular expression */
    ret = regexec(&regex, "hello", 0, NULL, 0);
    if (!ret) {
        printf("Match found\n");
    } else if (ret == REG_NOMATCH) {
        printf("No match found\n");
    } else {
        printf("Error occurred when executing regex\n");
        return -1; // or handle error appropriately
    }
    
    /* Free memory allocated to the pattern buffer by regcomp() */
    regfree(&regex);

    return 0;
}
