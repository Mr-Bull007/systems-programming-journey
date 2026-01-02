#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int id;
  char *name;
  float salary;
} Employee;

int main() {
  int num_employees = 3;
  Employee* employees = (Employee*)malloc(num_employees*sizeof(Employee));

  if(employees == NULL) {
    printf("Dynamic Memory Allocation Failed!\n");
    return 1;
  };

  printf("Creating employees: \n");
  for (int i = 0; i < num_employees; i++) {
    employees[i].id = i + 1;

    employees[i].name = (char*)malloc(50*sizeof(char));
    sprintf(employees[i].name, "Employee %d", i + 1);

    employees[i].salary = 50000 +(i*10000);

    printf("Name: %s, salary: %.2f\n", employees[i].name, employees[i].salary);
  }

  printf("Freeing memory: \n");
  for (int i = 0; i < num_employees; i++) {
    free (employees[i].name);
  };
  free(employees);
  printf("All memory freed!\n");

  return 0;
}
