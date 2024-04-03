
#include <llvm/Support/raw_ostream.h>
#include <llvm/Remarks/RemarkParser.h>

using namespace llvm;

struct RemarkBuffer {
    std::vector<remarks::Remark *> remarks;
};

void handleRemark(const char *buf, void *data) {
    auto rbuf = static_cast<RemarkBuffer *>(data);
    auto remarkParserOrErr = remarks::parseWithBlockSeparator("\n", buf);
    if (!remarkParserOrErr) {
        llvm::errs() << "Error parsing the string to a remark: " 
                     << toString(remarkParserOrErr.takeError()) << "\n";
        return;
    }
    remarks::RemarkParser &remarkParser = *remarkParserOrErr;
    for (remarks::ParsedBinary *buf : remarkParser) {
        if (!buf->First || !buf->Second) {
            continue;
        }
        rbuf->remarks.push_back(buf->First);
        rbuf->remarks.insert(rbuf->remarks.end(), buf->Second->begin(), 
                             buf->Second->end());
    }
}
