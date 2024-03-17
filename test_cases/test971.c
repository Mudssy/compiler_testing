
#include <stdio.h>

int main() {
    int x = 0;
    if (x) {
        printf("Dead code path executed.\n");
    } else {
        printf("Live code path executed.\n");
    }
    
    return 0;
}
