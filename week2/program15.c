//string manipulation with pointers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  char str1[50] = "Hello";
  printf("Str1 is %s with length %ld\n", str1, strlen(str1));

  char str2[50] = "World";
  printf("Str2 is %s with length %ld\n", str2, strlen(str2));

  printf("\nCharacters in str1 using pointer:\n");
  char* ptr = str1;
  while(*ptr != '\0') {
    printf("%c ", *ptr);
    ptr++;
  }
  printf("\n");

  printf("Concatenating str1 and str2:\n");
  char* result = (char*)malloc(strlen(str1) + strlen(str2) + 1);
  if(result == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  };

  strcpy(result, str1);
  strcat(result, " ");
  strcat(result, str2);

  printf("Result is %s with length %ld\n", result, strlen(result));

  //finding a character in a string
  char* find = strchr(result, ' ');
  if(find != NULL) {
    printf("Space found at position %ld\n", find - result);
  }

  free(result);
  printf("Memory freed!\n");
  return 0;
}
