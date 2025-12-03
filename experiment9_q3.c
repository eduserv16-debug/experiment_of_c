/*6.3. WAP to read a list of integers and store it in a single-dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/

#include <stdio.h>

int main() {

printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n-------------------------------------------------\n");

int n, i, key, count = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("Enter the number to find frequency: ");
scanf("%d", &key);
for(i = 0; i < n; i++) {
if(arr[i] == key)
count++;
}

printf("Frequency of %d is: %d\n", key, count);
return 0;
}
