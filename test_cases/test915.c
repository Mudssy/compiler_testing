
#include <stdio.h>
#include <llvm-c/Remarks.h>

int main() {
    llvm::remarks::Parser parser(llvm::remarks::Format::YAML);
    llvm::remarks::CheckedStream stream;
    auto err = llvm::Error::success();
    
    for (std::string line; std::getline(std::cin, line); ) {
        llvm::raw_string_ostream os{line};
        err = parser.parseLine(stream, os);
        
        if (!err) {
            printf("Remark: %s\n", stream.os().str().c_str());
        } else {
            handleAllErrors(std::move(err), [&](const llvm::ErrorInfoBase &eib) {
                errs() << "error parsing remark line '" << line << "': ";
                eib.log(errs());
                errs() << '\n';
            });
        }
    }
    
    return 0;
}
