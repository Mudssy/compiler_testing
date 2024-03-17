
#include <stdio.h>
#include "llvm/IR/Module.h"
#include "llvm/IRReader/IRReader.h"
#include "llvm/Support/SourceMgr.h"
#include "llvm/Support/YAMLTraits.h"

int main() {
    llvm::LLVMContext context;
    llvm::SMDiagnostic err;
    std::unique_ptr<llvm::Module> module(llvm::parseIRFile("input.ll", err, context));

    if (module == nullptr) {
        err.print("yaml-export", llvm::errs());
        return 1;
    }

    std::error_code EC;
    llvm::raw_fd_ostream os("output.yaml", EC, llvm::sys::fs::OF_Text);
    if (EC) {
        llvm::errs() << "Could not open output file: " << EC.message() << '\n';
        return 1;
    }

    llvm::yaml::Output yout(os);
    yout << module.get();

    return 0;
}
