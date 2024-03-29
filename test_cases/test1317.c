
#include <stdio.h>
#include <stdlib.h>
#include <clog.h>

int main() {
    clog_info("This is an info message");
    clog_warn("This is a warning message");
    clog_error("This is an error message");
    
    return 0;
}
