
#include <stdio.h>
#include <llvm/ProfileData/InstrProfReader.h>  // Include the llvm library header

int main() {
    char *Filename = "./profiles/default.profdata";  // Specify profile data file path
    iprintf("Reading profile data from %s\n", Filename);
    
    // Initialize a profiler reader
    auto ReaderOrErr = llvm::InstrProfReader::create(Filename);
    if (llvm::Error E = ReaderOrErr.takeError()) {  // Check for errors
        handleAllErrors(std::move(E), [&](const llvm::ErrorInfoBase &UB) {
            UB.log(llvm::errs());
        });
    } else {
      auto *Reader = ReaderOrErr.get();
      
      // Process the profile data...
    }
    
    return 0;  // Exit program
}
