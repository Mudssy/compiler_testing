
#include <stdio.h>
#include <unistd.h>  // for getopt()

int main(int argc, char *argv[]) {
    int opt;
    while((opt = getopt(argc, argv, "abc:")) != -1) {  // a, b and c are command line options
        switch(opt) {
            case 'a':  
                printf("Option 'a' is set\n");
                break;
            case 'b':
                printf("Option 'b' is set\n");
                break;
            case 'c':
                printf("Option 'c' with value '%s'\n", optarg);
                break;
            default: 
                printf("Invalid option\n");   // invalid options
                return -1;
        }
    }
    return 0;
}
