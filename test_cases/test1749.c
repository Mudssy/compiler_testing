
#include <stdio.h>

#define SERIAL_NUMBER 1234567890
#ifdef DEBUG_MODE
    #define LOG(message) printf("Log: %s\n", message)
#else
    #define LOG(message) ((void)0)
#endif

int main() {
    printf("Serial Number: %d\n", SERIAL_NUMBER);
    
    LOG("This is a log message");
    
    return 0;
}
