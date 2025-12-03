/*3.5According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year*/

#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    printf("Name - Raj Lakshmi\nSAPID - 590029493\nCourse - BCA\nBatch - B5");
    printf("\n--------------------------\n");

    int year, total_days = 0, i;
    printf("Enter the year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if (isLeapYear(i))
            total_days += 366;
        else
            total_days += 365;
    }

    int day = total_days % 7;
    printf("1st January %d is ", year);

    switch(day) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
    }

    printf("\n");
    return 0;
}
