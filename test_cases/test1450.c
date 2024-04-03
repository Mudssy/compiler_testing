
#include <stdio.h>

int main() {
    const char *profileData = __llvm_libc::__profiling::ReadProfile();
    if (profileData) {
        printf("Profile Data Loaded!\n");
    } else {
        printf("Failed to load profile data.\n");
    }
    
    return 0;
}
