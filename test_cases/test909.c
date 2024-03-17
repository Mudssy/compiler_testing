
#include <stdio.h>
#include "llvm/Analysis/Locks.h"

int main() {
    using namespace llvm;
    Function *F = /* Define a function to analyze */;
    LockInfo LockI;
    auto Result = findAllLocks(*F, LockI);
    if (Result) {
        printf("Lock acquisition and release analysis failed: %s\n", toString(Result.takeError()).c_str());
        return 1;
    }
    for (const LockEvent &LE : LockI.getAllLockEvents()) {
        switch (LE.getKind()) {
            case LockEvent::LK_Acquire:
                printf("Lock acquired at instruction %s\n", LE.getInstruction()->getName().data());
                break;
            case LockEvent::LK_Release:
                printf("Lock released at instruction %s\n", LE.getInstruction()->getName().data());
                break;
        }
    }
    return 0;
}
