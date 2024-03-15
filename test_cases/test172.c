
#include <stdio.h>

enum class Color { RED = 10, GREEN, BLUE };
enum struct Shape { SQUARE = 20, CIRCLE, TRIANGLE };

int main() {
    Color color = Color::GREEN;
    Shape shape = Shape::TRIANGLE;
    
    printf("Color: %d, Shape: %d\n", static_cast<int>(color), static_cast<int>(shape));

    return 0;
}
