
#ifdef _MSC_VER
    #define DLL_EXPORT __declspec(dllexport)
#else 
    #define DLL_EXPORT 
#endif

DLL_EXPORT void testFunction() {
    printf("Test function called successfully\n");
}

int main() {
    testFunction();
    return 0;
}
