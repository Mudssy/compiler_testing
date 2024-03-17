
#include <stdio.h>
#include "llvm/Remarks/YAMLSerializer.h"
#include "llvm/Support/raw_ostream.h"

int main() {
    // Create a remarks stream.
    llvm::remarks::YAMLRemarkSerializer Serializer;
    llvm::remarks::RemarkStream Remarks(Serializer);

    // Emit a remark with some data.
    llvm::remarks::Remark R("1", "This is a test remark");
    Remarks.emit(R);

    // Print the serialized YAML to stdout.
    Serializer.print(llvm::outs());
    return 0;
}
