
#include <stdio.h>
#include "llvm/ProfileData/InstrProfReader.h"

int main() {
    // Initialize the reader with your profile data file name and context
    llvm::InstrProfReader Reader("/path/to/profile_data.prof", /* IsCS */ true);
    
    if (Reader.hasError()) {
        printf("Failed to read profile data\n");
        return 1;
    }

    // Get the number of entries
    unsigned NumEntries = Reader.getNumValueSites(/* unused */0, /*unused */0);
    
    // Print out the number of entries
    printf("Number of entries: %u\n", NumEntries);

    return 0;
}
