
#include <stdio.h>

int main() {
    // Assume we have a function edge_profiles_enabled that returns true if the feature is enabled and false otherwise
    if (edge_profiles_enabled()) {
        printf("Edge profiles for CFG transformations are enabled.\n");
    } else {
        printf("Edge profiles for CFG transformations are disabled.\n");
    }
    
    return 0; // Ensure the program returns without running indefinitely
}
