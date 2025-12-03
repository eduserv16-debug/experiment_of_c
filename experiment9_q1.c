/*6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.*/


#include <stdio.h>

int main()
 {
         printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
         printf("\n-------------------------------------------\n");
int n, i;

printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int first, second;
first = second = -2147483648;
for(i = 0; i < n; i++) {
if(arr[i] > first) {
second = first;
first = arr[i];
} else if(arr[i] > second && arr[i] != first) {
second = arr[i];
}
}
if(second == -2147483648)
printf("No second largest element found.\n");
else
printf("Second largest element is: %d\n", second);

return 0;
}
