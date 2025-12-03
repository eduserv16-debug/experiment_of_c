//4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>
#include <math.h>

int main() {
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n------------------------------------------\n");

int year;
double population = 100000;

printf("Year\tPopulation\n");
for (year = 1; year <= 10; year++) {
population = population * 1.10;
printf("%d\t%.0f\n", year, population);
}

return 0;
}
