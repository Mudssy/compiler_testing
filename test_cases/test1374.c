
#include <stdio.h>
#include <unistd.h>

int main() {
    long max_open_files = sysconf(_SC_OPEN_MAX);
    
    if (max_open_files == -1) {
        perror("sysconf");
        return 1;
    }

    printf("The maximum number of open files is %ld\n", max_open_files);

    return 0;
}
