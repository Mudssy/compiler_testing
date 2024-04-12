
#include <stdio.h>

int main() {
    int i;
    char c, str[50];
    double d;

    printf("Enter a integer:\n");
    scanf("%d", &i);
    
    printf("Enter a character:\n");
    scanf("\n%c",&c);   // Reading an extra newline before %c in the next scanf

    printf("Enter a string:\n");
    scanf("%s",str);
    
    printf("Enter a float:\n");
    scanf("%lf", &d);

    printf("You entered: %d::::%c::::%s::::%.2lf\n", i, c, str, d);

    return 0;
}
