//pointers to pointers
#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x;
  int **q = &p;

  printf("Accessing the value of x using all 3 variables: \n");
  printf("Via x => %d\n", x);
  printf("Via p => %d\n", *p);
  printf("Via q => %d\n", **q);

  printf("Accessing the value of p using all 3 variables: \n");
  printf("Via x => %p\n", &x);
  printf("Via p => %p\n", p);
  printf("Via q => %p\n", *q);

  printf("Accessing the value of q using all 3 variables: \n");
  printf("Via x => cannot be done because the chain of pointers is one directional\n");
  printf("Via p => %p\n", &p);
  printf("Via q => %p\n", q);

  return 0;
}
