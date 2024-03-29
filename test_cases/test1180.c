
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char *filename;
    int fd;
    
    // Generate a temporary file name
    filename = tmpnam(NULL);
    
    if (filename == NULL) {
        perror("tmpnam failed");
        return 1;
    }
    
    printf("Temporary file name is: %s\n", filename);
    
    // Open the temporary file
    fd = open(filename, O_RDONLY | O_CREAT, S_IRUSR | S_IWUSR);
    
    if (fd == -1) {
        perror("open failed");;
        return 1;
    }
    
    printf("File descriptor is: %d\n", fd);
    
    // Unlink the file so that it gets removed when closed
    unlink(filename);
    
    // Close the file
    close(fd);
    
    return 0;
}
