//5.1: Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int counter = 0;

void printDetails() {
printf("Name - Rajlakshmi\n");
printf("SAP ID - 590029493\n");
printf("Course - BCA\n");
printf("Batch - B5\n");
printf("--------------------------------------------------\n");
}

void increment() {
counter++;
printf("Counter after increment: %d\n", counter);
}

void decrement() {
counter--;
printf("Counter after decrement: %d\n", counter);
}

void display() {
printf("Current counter value: %d\n", counter);
}
int main() {
printDetails();
printf("Initial counter value: %d\n", counter);
increment();
increment();
decrement();
display();

return 0;
}

