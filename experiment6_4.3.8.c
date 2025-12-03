//4.3.8
#include <stdio.h>

int main() {
    printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
    printf("\n--------------------------------------------------\n");

    int row, space, num;
    int n = 5;

    for (row = 1; row <= n * 2 - 1; row++) {
        int current = row <= n ? row : n * 2 - row;

        for (space = 1; space <= n - current; space++) {
            printf(" ");
        }
        for (num = 1; num <= current; num++) {
            printf("%d ", num);
        }
        for (num = current - 1; num >= 1; num--) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
