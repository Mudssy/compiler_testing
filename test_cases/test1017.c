
#include <stdio.h>

static void private_function() {
    printf("Hello from private function!\n");
}

void public_function() {
    printf("Hello from public function!\n");
    private_function();
}

int main(void) {
    public_function();
    return 0;
}
