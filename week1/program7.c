//print multiplication table
#include <stdio.h>

void printTable (int num) {
  for (int i = 1; i < 11; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  };
}

int main() {
  int x;
  printf("Which number's table you wanna hear?\n");
  scanf("%d", &x);
  printTable(x);

  return 0;
}
