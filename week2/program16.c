#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  //Array of Strings
  char* fruits[] = {"apple", "banana", "cherry", "date", "elderberry"};
  int num_fruits = sizeof(fruits) / sizeof(fruits[0]);

  printf("The fruits are: \n");
  for(int i = 0; i < num_fruits; i++) {
    printf("%d. %s (length: %ld)\n", i+1, *(fruits+i), strlen(*(fruits+i)));
  };
  printf("\n");

  printf("Using double pointer to access the fruits: \n");
  char** ptr = fruits;
  for(int i = 0; i < num_fruits; i++) {
    printf("Fruits are: %s\n", *(ptr));
    ptr++;
  };

  return 0;
}
