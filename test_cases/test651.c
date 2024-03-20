
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char test_chars[] = {'A', '1', '!'};
    int i;
    
    for (i = 0; i < 3; ++i){
        if(isalpha(test_chars[i])){  // checks if the character is alphabetic
            printf("'%c' is an alphabet\n", test_chars[i]);
        } else {
            printf("'%c' is not an alphabet\n", test_chars[i]);
        }
    }
    
    return 0; // the program returns 0 to indicate a successful execution
}
