//4.3.13
#include <stdio.h>
int main() {
	
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n-----------------------------------------------------\n");

int i, j, space;
for (i = 5; i >= 1; i--) {
for (space = 0; space < 5 - i; space++) {
printf(" ");
}
for (j = 5; j >= 6 - i; j--) {
printf("%d", j);
}
printf("\n");
}

return 0;
}
