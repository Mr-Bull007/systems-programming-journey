#include <stdio.h>
#include <stdlib.h>

int main() {
  //allocate array on heap
  int size = 5;
  int* arr = (int*)malloc(size*sizeof(int));

  //checking if memory allocation succeeded
  if(arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  };

  //initialising the array
  printf("Initialising the array: \n");
  for(int i = 0; i < size; i++) {
    arr[i] = i+1;
    printf("arr[%d] = %d\n", i, arr[i]);
  };

  //allocate string on heap
  char* str = (char*)malloc(50*sizeof(char));

  if(str == NULL) {
    printf("Memory not allocated!\n");
    free(arr);
    return 1;
  };

  sprintf(str, "Hi from Rushabh!");
  printf("String = %s\n", str);

  //free memory (Very Imp)
  free(arr);
  free(str);
  printf("Memory freed successfully!\n");

  return 0;
}
