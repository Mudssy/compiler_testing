
#include <stdio.h>

int main() {
    FILE *f = fopen("test_file.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    const char *text = "Hello, World!";
    for(int i = 0; i < 5; ++i){
      fprintf(f, "%s %d\n", text, i);
    }

    fclose(f);
    return 0;
}
