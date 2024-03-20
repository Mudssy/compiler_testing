
#include <stdio.h>
#include <string.h>

int check_palindrome(char* str, const int len) {
    char *strt = str;
    char *end = str + len - 1;
    
    while (end > strt) {
        if (*strt != *end) {
            return 0;
        }
        ++strt;
        --end;
    }
    return 1;
}

int main() {
    char* test_str = "radar";
    int len = strlen(test_str);
    
    if (check_palindrome(test_str, len)) {
        printf("%s is a palindrome\n", test_str);
    } else {
        printf("%s is not a palindrome\n", test_str);
    }
}
