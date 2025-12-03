//4.3.6
#include <stdio.h>

int main() {
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n--------------------------------------------\n");

int row, col;

for (row = 5; row >= 1; row--) {
for (col = row; col >= 1; col--) {
printf("%d", col);
}
printf("\n");
}

return 0;
}
