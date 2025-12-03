#include <stdio.h>

int main() {
  int x[] = {10, 20, 30, 40, 50};
  int *p = &x[0];

//printing array elements using pointer arithmetic
printf("The array elements are: \n");
 for(int i=0; i < 5; i++) {
  printf("x[%d] = %d (address: %p)\n", i, *(p+i), (p+i));
 }

  return 0;
}
