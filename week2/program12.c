#include <stdio.h>

void increment(int *x) {
  (*x)++;
};

void swap(int *a, int *b) {
  int temp = *a;
  *a =*b;
  *b = temp;
};

void doubleArray(int *arr, int size) {
  for(int i =0; i < size; i++) {
    *(arr + i) = *(arr + i) * 2;
  };
};

int main() {
  //test increment
  int x = 10;
  printf("x before increment: %d\n", x);
  increment(&x);
  printf("x after increment: %d\n", x);

  //test swap
  int a = 11;
  int b = 25;
  printf("\nValues before swap: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("Values after swap: a = %d, b = %d\n", a, b);

  //test doubling the array
  int arr[] = {2, 4, 5, 66, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("\nArray before doubling: ");
  for(int i =0; i < size; i++) {
    printf("%d ", arr[i]);
  };
  printf("\n");
  doubleArray(arr, size);
  printf("Array after doubling: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  };
  printf("\n");

  return 0;
}
