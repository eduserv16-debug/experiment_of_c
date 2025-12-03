/*3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts)*/
#include <stdio.h>
int main()
{
printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
printf("\n----------------------------------------\n");
int n, i;
float weight, height, bmi;
printf("Enter number of people: ");
scanf("%d", &n);
printf("\n-------------------------------------------------------------\n");
printf("| Person | Weight (kg) | Height (m) | BMI Value | Category |\n");
printf("-------------------------------------------------------------\n");
for (i = 1; i <= n; i++) {
printf("\nEnter weight for person %d (kg): ", i);
scanf("%f", &weight);
printf("Enter height for person %d (m): ", i);
scanf("%f", &height);
bmi = weight / (height * height);
printf("-------------------------------------------------------------\n");
printf("| %2d | %8.2f | %8.2f | %8.2f |", i, weight, height, bmi);
if (bmi < 15)
printf(" Starvation |\n");
else if (bmi >= 15.1 && bmi <= 17.5)
printf(" Anorexic |\n");
else if (bmi >= 17.6 && bmi <= 18.5)
printf(" Underweight |\n");
else if (bmi >= 18.6 && bmi <= 24.9)
printf(" Ideal |\n");
else if (bmi >= 25 && bmi <= 25.9)
printf(" Overweight |\n");
else if (bmi >= 30 && bmi <= 39.9)
printf(" Obese |\n");
else if (bmi >= 40)
printf(" Morbidly Obese |\n");
else
printf(" Not Defined |\n");
}
printf("-------------------------------------------------------------\n");
return 0;
}
