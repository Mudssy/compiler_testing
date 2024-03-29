
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "abc:")) != -1) {
        switch (opt) {
        case 'a':
            printf("Option 'a' was provided\n");
            break;
        case 'b':
            printf("Option 'b' was provided\n");
            break;
        case 'c':
            printf("Option 'c' with value '%s' was provided\n", optarg);
            break;
        default: 
            fprintf(stderr, "Unknown option character `\\x%x'.\n", optopt);
        }
    }
    return 0;
}
