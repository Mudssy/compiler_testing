
#include <stdio.h>

void __stdcall PrintMessage() {
    printf("Hello from stdcall\n");
}

int main() {
    PrintMessage();
    return 0;
}
