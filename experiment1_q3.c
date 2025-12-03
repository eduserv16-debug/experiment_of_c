/* 3.Write a program that prompts the user to enter their name and age.*/

#include <stdio.h>
int main()
{
printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
printf("\n----------------------------------------\n");
char name[50];
int age ;

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your age: ");
scanf("%d", &age);

printf("Hello %s, you are %d years old.\n", name, age);
return 0;
}
