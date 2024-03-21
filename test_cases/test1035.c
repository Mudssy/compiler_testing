
#include <stdio.h>

int main() {
    auto lambda = [](const char* str) -> void { printf("Lambda function called from %s\n", str); };
    
    // Call the lambda function with __func__
    lambda(__func__);

    return 0;
}
