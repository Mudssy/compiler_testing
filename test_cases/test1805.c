
#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd;
    char buffer[10];
    
    // Test 1: Read from uninitialized file descriptor
    ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
    if (bytesRead < 0) {
        printf("Test 1 failed - reading from an uninitialized file descriptor\n");
        return 1;
    } else {
        printf("Test 1 passed - reading from an uninitialized file descriptor was not possible\n");
    }
    
    // Test 2: Write to a closed file descriptor
    fd = open("/dev/null", O_WRONLY);
    if (fd < 0) {
        printf("Could not open /dev/null\n");
        return 1;
    } else {
        close(fd);
        ssize_t bytesWritten = write(fd, buffer, sizeof(buffer));
        if (bytesWritten >= 0) {
            printf("Test 2 failed - writing to a closed file descriptor\n");
            return 1;
        } else {
            printf("Test 2 passed - writing to a closed file descriptor was not possible\n");
        }
    }
    
    return 0;
}
