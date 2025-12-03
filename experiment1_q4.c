/*4.Write a C program to add two numbers, take number from user.*/
#include <stdio.h>
int main()
{
printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
printf("\n----------------------------------------\n");
int num1, num2, sum;
printf("Enter the first number: ");
scanf("%d", &num1);
while(getchar() != '\n');
printf("Enter the second number: ");
scanf("%d", &num2);
while(getchar() != '\n');
sum = num1 + num2;
printf("The sum of %d and %d is %d\n", num1, num2, sum);
return 0;
}
