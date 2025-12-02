//simple function
#include <stdio.h>

double calculateAverage(int a, int b) {
  int sum = a + b;
  return (sum / 2.0);
}

int main () {
  double avg = calculateAverage(5,10);
  printf("The average of 5 and 10 is %f", avg);
  return 0;
}
