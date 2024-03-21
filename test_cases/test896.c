
#include <llvm/Remarks/Remark.h>
#include <llvm/Remarks/RemarkFormat.h>
#include <stdio.h>
#include <string.h>

// Parse a single remark in this program's format.
void parse_remark(const char *String) {
  llvm::remarks::Parser Parser(llvm::remarks::Format::Bitstream);
  // If it's not a valid bitstream, ignore the remark.
  if (!Parser.canUnderstandThisVersion())
    return;
  if (auto Remark = Parser.next(String)) {
    if (Remark->Pass == "PerformanceImplications") {
      printf("Performance Implication:\n");
      for (const auto &Arg : *Remark) {
        // Print argument name and its value, if any.
        printf("%s = %s\n", Arg.Key.str().c_str(), Arg.Val.empty() ? "" : Arg.Val.str().c_str());
      }
    }
  } else {
    fprintf(stderr, "Failed to parse remark: '%s'\n", String);
  }
}

int main() {
    const char *remarks = "<remark version=\"1.0\"";
    remarks += " pass=\"PerformanceImplications\">";
    remarks += " <function name=\"foo\" hotness=\"100\"/>";
    remarks += " </remark>";

    parse_remark(remarks);
    
    return 0;
}
