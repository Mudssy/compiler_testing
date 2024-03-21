
#ifdef _MSC_VER
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT 
#endif

EXPORT int main() {
    return 0; // Program always returns normally.
}
