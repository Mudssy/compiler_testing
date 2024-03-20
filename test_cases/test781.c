
#include <stdio.h>
union Data {
   int i;
   float f;
};
int main() {
   union Data data;        
   printf("Memory size occupied by data : %d\n", sizeof(data));
   return 0;
}
