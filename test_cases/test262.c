
#include <stdio.h>

int main() {
    printf("Hello, World!\n"); // UTF-8 encoded string literal
    
    char *s = "This is a "\
              u8"Unicode (UTF-8) "\
              L"wide character constant (wchar_t)"\
              u"Unicode16 character constant (char16_t) "\
              U"Unicode32 character constant (char32_t)"\
              ;
    printf("%s\n", s);
    
    return 0;
}
