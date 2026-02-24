#include "../src/include/base.h"

i8 sum(i8 a, i8 b) { return a + b; }

int main(void) {
  i8 x = sum(2, 2);
  printf("Sum: %d\n", x);
  return 0;
}
