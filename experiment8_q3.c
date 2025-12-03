//5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int globalVar = 100;

void printDetail() {
printf("Name - Rajlakshmi\n");
printf("SAP ID - 590029493\n");
printf("Course - BCA\n");
printf("Batch - B5\n");
printf("--------------------------------------------------\n");
}

int main() {
printDetail();

printf("Global variable: %d\n", globalVar);

{
  int blockVar1 = 10;
  printf("Inside first block: %d\n", blockVar1);
}
{
int blockVar2 = 20;
printf("Inside second block: %d\n", blockVar2);
}
return 0;
}

