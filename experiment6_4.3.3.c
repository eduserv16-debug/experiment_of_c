//4.3.3
#include <stdio.h>
int main() {
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n-------------------------------------------\n");
int row, col, num;
num = 1;

for (row = 1; row <= 5; row++) {
for (col = 1; col <= row; col++) {
printf("%d ", num);
num++;
}
printf("\n");
}

return 0;
}
