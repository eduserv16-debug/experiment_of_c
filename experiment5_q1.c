/*4.1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>

int main()
 {  printf("Name-Raj Lakshmi\nSAPID - 590029493\nCourse -BCA\nbatch- B5");
    printf("\n-----------------------------\n");
    int num, pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers = %d", pos);
    printf("\nCount of negative numbers = %d", neg);
    printf("\nCount of zeroes = %d\n", zero);

    return 0;
}
