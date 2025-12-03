//5.2: Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

int globalVar = 100;
int counter = 0;

void printDetail() {
printf("Name - Rajlakshmi\n");
printf("SAP ID - 590029493\n");
printf("Course - BCA\n");
printf("Batch - B5\n");
printf("--------------------------------------------------\n");
}

void testFunction() {
int localVar = 50;
printf("Inside testFunction:\n");
printf("Global variable: %d\n", globalVar);
printf("Local variable: %d\n", localVar);
}

int main() {
printDetail();
testFunction();
printf("\nInside main:\n");
printf("Global variable: %d\n", globalVar);

return 0;
}
