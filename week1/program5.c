//sum of an array
#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 3, 42, 55};
  int sum = 0;
  for(int i = 0; i < 5; i++) {
    sum = sum + arr[i];
  };
  printf("The total sum of the given array is %d", sum);

  return 0;
}
