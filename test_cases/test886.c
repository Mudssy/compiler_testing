
#include <stdio.h>
#include "llvm/IR/DebugInfoMetadata.h" // Use LLVM's debug info metadata header
#include "llvm/Remarks/Remark.h"       // Use LLVM's remarks header

int main() {
    std::unique_ptr<llvm::remarks::Serializer> Serializer = llvm::remarks::createRemarkSerializer(llvm::remarks::Format::Bitstream, "");
    
    // Create a remark with the name of your choice.
    // In this case we use the compiler's standard format for remarks: <pass>:<type>:<name>:<msg>
    std::unique_ptr<llvm::remarks::Remark> R(new llvm::remarks::Remark());
    R->setHotness(1); // Set the Hotness threshold value to 1 for this remark.
    
    // Create a debug location using LLVM's DebugLoc class and set it as the location of this remark.
    llvm::DebugLoc DL = llvm::DebugLoc::get(0, 0, R->getLocation());
    R->setLocation(DL);
    
    // Serialize the remark to a string.
    std::string SerializedRemark;
    llvm::raw_string_ostream OS(SerializedRemark);
    Serializer->emit(*R);
    OS.flush();
    
    // Print out the serialized remark.
    printf("%s", SerializedRemark.c_str());
    
    return 0;
}
