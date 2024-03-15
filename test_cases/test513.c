
#include <stdio.h>
#include <sanitize/thread_attributes.h>

int main() {
    __sanitizer::ThreadSanitizer tsan;

    if (tsan.has_feature("sanitize_thread_attributes")) {
        printf("Sanitize Thread Attributes feature is supported.\n");
    } else {
        printf("Sanitize Thread Attributes feature is not supported.\n");
    }

    return 0;
}
