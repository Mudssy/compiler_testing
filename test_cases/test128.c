
#include <stdio.h>
#include "llvm/ADT/Statistic.h"

int main() {
    llvm::Statistic *MyStat = new llvm::Statistic("MyStat", "Example statistic");
    MyStat->addRecord(42);
    printf("The value of the custom statistic is: %d\n", MyStat->getValue());
    return 0;
}
