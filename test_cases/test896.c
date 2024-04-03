
#include <stdio.h>
#include <string.h>

int main() {
    char remarks[256] = "<remark version=\"1.0\"";
    strcat(remarks, " pass=\"PerformanceImplications\">");
    strcat(remarks, " <function name=\"foo\" hotness=\"100\"/>");
    strcat(remarks, " </remark>");

    printf("%s\n", remarks);
    
    return 0;
}
