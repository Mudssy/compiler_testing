
#include <stdio.h>
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

int main() {
    printf("File :" TOSTRING(__FILE__) "\n");
    printf("Line :%d\n", __LINE__);
    printf("Date :" TOSTRING(__DATE__) "\n");
    printf("Time :" TOSTRING(__TIME__) "\n");
    printf("Timestamp :%s\n", __TIMESTAMP__);

    return 0;
}
