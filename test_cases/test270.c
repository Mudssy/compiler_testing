
int main() {
    const char *color = "\e[1;32m"; // ANSI escape code for green color
    printf("%sgreen text%s\n", color, "\x1B[0m"); // Print "green text" in green color
    return 0;
}
