
#include <stdio.h>
#include <clang-c/Index.h>  // Make sure this is a valid path to the header file for clang-c library.

int main(void) {
    CXIndex idx = clang_createIndex(0, 1);
    
    const char *args[] = { "-I.", "/usr/include" };
    CXTranslationUnit tu = clang_parseTranslationUnit(idx, "test.c", args, sizeof(args) / sizeof(*args), NULL, 0, CXTranslationUnit_None);
    
    if (tu == NULL) {
        printf("Failed to parse translation unit! Did you forget to include the right headers?\n");
        return 1;
    }
    
    CXCursor cursor = clang_getTranslationUnitCursor(tu);
    clang_visitChildren(cursor, visitor, NULL);
    
    clang_disposeTranslationUnit(tu);
    clang_disposeIndex(idx);
    
    return 0;
}
