//4.3.9
#include <stdio.h>

int main() {
    printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------\n");

    int n = 5, row, space, num;

    for (row = 1; row <= 2 * n - 1; row++) {
        int current = row <= n ? row : 2 * n - row;

        for (space = 1; space <= n - current; space++)
            printf("  ");

        for (num = n; num >= n - current + 1; num--)
            printf("%d ", num);

        for (num = n - current + 2; num <= n; num++)
            printf("%d ", num);

        printf("\n");
    }

    return 0;
}
