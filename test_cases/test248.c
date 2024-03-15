
#include <stdio.h>

int main() {
    char utf8_str[] = "Hello, 世界!";
    wchar_t utf16_str[] = L"Hello, 世界!";
    int32_t utf32_str[] = U"Hello, 世界!";

    printf("UTF-8 string: %s\n", utf8_str);
    printf("UTF-16 string: %ls\n", utf16_str);
    // UTF-32 support in printf is not mandatory for C compilers, so we can't reliably print it this way.
    // However, you can manually print each code unit (32-bit integer) from the UTF-32 string.
    printf("UTF-32 string: ");
    for (int i = 0; utf32_str[i] != 0; i++) {
        printf("%c", (char)(utf32_str[i] & 0xFF));
    }
    printf("\n");

    return 0;
}
