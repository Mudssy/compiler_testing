
#include <stdio.h>

int main() {
    // Assembly language output control feature test
    asm("mov eax, 4");
    asm("mov ebx, 1");
    asm("mov ecx, message");
    asm("mov edx, 13");
    asm("int 0x80");
    
    // Message to be printed
    char message[] = "Hello, World!";
}
