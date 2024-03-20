
int main() {
    int x = 10;
    #pragma clang fsp token rewrite begin_token(LBrace)
        printf("%d\n", (x == 5));
    #pragma clang fsp token rewrite end_token(RBrace)
    return 0;
}
