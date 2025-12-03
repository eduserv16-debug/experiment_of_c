/*3.2. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.*/
#include <stdio.h>
int main()
{
printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
printf("\n----------------------------------------\n");
int a, b, c;
printf("Enter the three sides of the triangle: ");
scanf("%d %d %d", &a, &b, &c);
if ((a + b > c) && (a + c > b) && (b + c > a)) {
printf("Triangle is valid.\n");
if (a == b && b == c) {
printf("It is an Equilateral Triangle.\n");
}
else if (a == b || b == c || a == c) {
printf("It is an Isosceles Triangle.\n");
}
else {
printf("It is a Scalene Triangle.\n");
}
if ((a * a + b * b == c * c) ||
(a * a + c * c == b * b) ||
(b * b + c * c == a * a)) {
printf("It is also a Right-angled Triangle.\n");
}
}
else {
printf("Triangle is not valid.\n");
}
return 0;
}
