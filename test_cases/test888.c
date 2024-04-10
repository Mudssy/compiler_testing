
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;

struct Buffer {
    int* First;
    vector<int*>* Second;
};

struct RemarkBuffer {
    vector<int*> remarks;
};

void parseRemarks(Buffer *buf, RemarkBuffer *rbuf) {
        if (!buf->First || !buf->Second) {
            return;
         }
        rbuf->remarks.push_back(buf->First);
        for (int i = 0; i < buf->Second->size(); ++i) {
          rbuf->remarks.push_back((*buf->Second)[i]);
        }
}
