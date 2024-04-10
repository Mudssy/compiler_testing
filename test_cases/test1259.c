
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char message[] = "This is a log message\n";

int main() {
    int fileDescriptor;
    
    // Create or open the file for write only access. Set permissions to 0755.
    fileDescriptor = open("mylogfile", O_WRONLY | O_CREAT, 0755);
    if (fileDescriptor < 0) exit(1);
    
    // Write the message into the file.
    write(fileDescriptor, message, sizeof(message)-1);
    
    // Close the file descriptor.
    close(fileDescriptor);
}
