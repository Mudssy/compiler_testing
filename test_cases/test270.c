
#include <stdio.h>
#include <clang-c/Index.h>

int main() {
    // Create an index with excludeDeclarationsFromPCH = 1, displayDiagnostics=1 
    CXIndex idx = clang_createIndex(1, 1);
    
    // Command line arguments for parsing the file
    const char *args[] = {"clang", "-fsyntax-only"};

    // Create a translation unit from source file. 
    // The last parameter is an array of unsaved files. Here we don't have any, so just pass null pointer.
    CXTranslationUnit tu = clang_parseTranslationUnit(idx, "main.c", args, 2, NULL, 0, CXTranslationUnit_None);
    
    // Diagnostic printing options (can be used to make color output)
    unsigned diagnosticOptions = CXDiagnostic_DisplaySourceLocation | CXDiagnostic_DisplayColumn | 
                                 CXDiagnostic_DisplaySourceRanges | CXDiagnostic_DisplayOption;

    printf("Diagnostics for main.c:\n");
    // Loop over all the diagnostics
    for(unsigned i = 0, n = clang_getNumDiagnostics(tu); i != n; ++i) {
        CXDiagnostic diag = clang_getDiagnostic(tu, i);
        CXString str = clang_formatDiagnostic(diag, diagnosticOptions);
        fprintf(stderr, "%s\n", clang_getCString(str));
        clang_disposeString(str);
        clang_disposeDiagnostic(diag); 
    }
    
    // Clean up the translation unit and index.
    clang_disposeTranslationUnit(tu);
    clang_disposeIndex(idx);
}
