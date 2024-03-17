
#include <stdio.h>

int main() {
    printf("%s (%d): Hello world!\n", __FILE__, __LINE__);
    #line 10 "another_file"
    printf("%s (%d): Hello again! This line is from another file.\n", __FILE__, __LINE__);
    return 0;
}
