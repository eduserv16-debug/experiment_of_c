//5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>

void printDetail() {
printf("Name - Rajlakshmi\n");
printf("SAP ID - 590029493\n");
printf("Course - BCA\n");
printf("Batch - B5\n");
printf("--------------------------------------------------\n");
}

void staticCounter() {
  static int count = 0;
  count++;
printf("Static count: %d\n", count);
}

int main() {
  printDetail();
  staticCounter();
  staticCounter();
  staticCounter();
  
  return 0;
}

