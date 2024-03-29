
#define O_WRONLY 0x1
#define O_CREAT  0x200

typedef long size_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned short mode_t;
typedef long off_t;

extern int open(const char *pathname, int flags, mode_t mode);
extern ssize_t write(int fd, const void *buf, size_t count);
extern int close(int fd);

void exit(int status);
#define NULL ((void *)0)

char message[] = "This is a log message\n";

void main() {
    int fileDescriptor;
    char* pathname = "/tmp/logfile.txt";

    /* Attempt to open the file with read-write access */
    fileDescriptor = open(pathname, O_WRONLY|O_CREAT, 0755);
     if (fileDescriptor < 0) exit(1);

    write(fileDescriptor, message, sizeof(message)-1);

    close(fileDescriptor);
}
