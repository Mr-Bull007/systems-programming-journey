//pointers basic
#include <stdio.h>

int main() {
  int x = 5;
  int *p = &x;
  printf("The value of x is: %d\n", x);
  printf("The address of x is: %p\n", p);
  printf("p's address again is: %p\n", (void*)p);
  printf("Value at address p: %d\n", *p);
  return 0;
}
