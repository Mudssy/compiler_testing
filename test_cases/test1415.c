
#include <stdio.h>

// Define the edge_profiles_enabled function (this will just return true for now)
int edge_profiles_enabled() {
    return 1;
}

int main() {
    if (edge_profiles_enabled()) {
        printf("Edge profiles for CFG transformations are enabled.\n");
    } else {
        printf("Edge profiles for CFG transformations are disabled.\n");
    }
    
    return 0; // Ensure the program returns without running indefinitely
}
