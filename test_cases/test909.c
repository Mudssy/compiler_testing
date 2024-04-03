
#include <llvm/IR/Function.h>
#include <llvm/Support/raw_ostream.h>

using namespace llvm;

void runOnFunction(Function &F) {
    for (auto& BB : F){
        if (!BB.empty()){
            Instruction *I = BB.getFirstNonPhis();
            if(I != nullptr){
                errs() << "Lock released at instruction " << I << '\n';
            }
         }
    }
}
