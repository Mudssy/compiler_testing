
#include <stdio.h>

int main() {
    char utf8String[] = u8"Hello World - UTF-8";
    char16_t utf16String[] = u"Hello World - UTF-16";
    char32_t utf32String[] = U"Hello World - UTF-32";
    
    printf("%s\n", utf8String);
    printf("%ls\n", utf16String);
    printf("%ls\n", (wchar_t*)utf32String); // wchar_t is often 32 bits wide, but this won't always be true.
    
    return 0;
}
