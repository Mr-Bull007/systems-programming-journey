#include <stdio.h>

int main() {
  int x = 55;
  int *p = &x;

  printf("The value of  x is: %d\n", x);
  printf("The address of x is: %p\n", &x);
  printf("Pointer p stores: %p\n", p);
  printf("The value at address p is: %d\n", *p);

  *p = 100;

  printf("After modifying the value at address p:\n");
  printf("The value of x is:%d\n", x);
  printf("The Pointer p stores: %p\n", p);
  printf("The value at address p is: %d\n", *p);

  return 0;
}
