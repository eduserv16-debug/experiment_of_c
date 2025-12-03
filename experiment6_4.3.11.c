//4.3.11
#include <stdio.h>
int main() {
	
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse- BCA \nBatch-B5");
printf("\n----------------------------------------------\n");

int row, col, start;
for (row = 1; row <= 5; row++) {
start = 6 - row; 
for (col = start; col <= 5; col++) {
printf("%d", col);
}
printf("\n");
}

return 0;
}

