/*6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order, respectively.
 Print both the input matrices and the resultant matrix with suitable headings, and output should be in matrix format only.
 The program must check the compatibility of orders of the matrices for multiplication. 
 Report appropriate message in case of incompatibility*/

#include <stdio.h>

int main() {
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n----------------------------------------------------\n");

int m, n, p, q, i, j, k;
printf("Enter rows and columns of Matrix A (m n): ");
scanf("%d %d", &m, &n);

printf("Enter rows and columns of Matrix B (p q): ");
scanf("%d %d", &p, &q);
if(n != p) {

printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
return 0;
}
int A[m][n], B[p][q], C[m][q];
printf("Enter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
for(i = 0; i < m; i++) {
for(j = 0; j < n; j++) {
scanf("%d", &A[i][j]);
}
}

printf("Enter elements of Matrix B (%d x %d) in row-major order:\n", p, q);
for(i = 0; i < p; i++) {
for(j = 0; j < q; j++) {
scanf("%d", &B[i][j]);
}
}
for(i = 0; i < m; i++) {
for(j = 0; j < q; j++) {
C[i][j] = 0;
}
}
for(i = 0; i < m; i++) {
for(j = 0; j < q; j++) {
for(k = 0; k < n; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}

printf("\nMatrix A (%d x %d):\n", m, n);
for(i = 0; i < m; i++) {
for(j = 0; j < n; j++) {
printf("%4d", A[i][j]);
}
printf("\n");
}

printf("\nMatrix B (%d x %d):\n", p, q);
for(i = 0; i < p; i++) {
for(j = 0; j < q; j++) {
printf("%4d", B[i][j]);
}
printf("\n");
}

printf("\nProduct Matrix C = A x B (%d x %d):\n", m, q);
for(i = 0; i < m; i++) {
for(j = 0; j < q; j++) {
printf("%4d", C[i][j]);
}
printf("\n");
}

return 0;
}

