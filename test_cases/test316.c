
#include <stdio.h>
void printMessage(_Nullable char *message) {
    if (message == NULL) {
        printf("Message is NULL\n");
    } else {
        printf("%s\n", message);
    }
}
int main() {
    printMessage(NULL);
    return 0;
}
