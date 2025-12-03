//4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.

#include <stdio.h>

int main() {
	
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n--------------------------------------------------\n");

int a, b, c, d;
int limit = 20;
int cubeSum[10000] = {0};

printf("Ramanujan Numbers up to cube of %d:\n", limit);

for (a = 1; a <= limit; a++) {
for (b = a; b <= limit; b++) {
int sum1 = a*a*a + b*b*b;

for (c = a + 1; c <= limit; c++) {
for (d = c; d <= limit; d++) {
int sum2 = c*c*c + d*d*d;

if (sum1 == sum2 && (a != c || b != d)) {
if (!cubeSum[sum1]) {
printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);

cubeSum[sum1] = 1;
}
}
}
}
}
}

return 0;
}
