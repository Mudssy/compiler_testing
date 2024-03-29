
#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *dr;
    struct dirent *en;
    
    dr = opendir("."); //open current directory
    if (dr) {
        while ((en = readdir(dr)) != NULL) //read every entry in the directory
            printf("%s\n", en->d_name); 
        
        closedir(dr); //close the directory
    } else {
        perror("Could not open current directory");
        return 1;
    }
    
    return 0;
}
