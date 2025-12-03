/*3.1.Write a C program to check whether a number is Even or ODD*/

#include <stdio.h>
int main()
{
printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
printf("\n----------------------------------------\n");
int num;
printf("Enter a number: ");
scanf("%d", &num);
if(num % 2 == 0)
printf("%d is Even\n", num);
else
printf("%d is Odd\n", num);
return 0;
}
