#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int* data;
  int size;
} DynamicArray;

DynamicArray* createDynamicArray(int size) {
  DynamicArray* arr = (DynamicArray*)malloc(sizeof(DynamicArray));
  arr->data = (int*)malloc(sizeof(int));
  arr->size = size;
  return arr;
};

void printArray(DynamicArray* arr) {
  for(int i =0; i < arr->size; i++) {
    printf("%d. %d\n", i+1, arr->data[i]);
  };
};

void doubleArray(DynamicArray* arr) {
  for(int i = 0; i < arr->size; i++) {
    *(arr->data + i) = arr->data[i] * 2;
  };
  printf("Doubling done!\n");
};

void freeArray(DynamicArray* arr) {
  free(arr->data);
  free(arr);
  printf("Memory freed!\n");
};

int main() {
  DynamicArray* MyArray = createDynamicArray(5);

  for(int i = 0; i < MyArray->size; i++) {
    *(MyArray->data + i) = (i + 1) * 10;
  };


  printf("Original Array: \n");

  printArray(MyArray);

  doubleArray(MyArray);
  printf("After doubling: \n");
  printArray(MyArray);

  freeArray(MyArray);
  printf("Array freed!\n");

  return 0;
}

