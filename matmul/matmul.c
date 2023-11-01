#include <stdio.h>
#include <stdlib.h>

#define I1 i
#define I2 j
#define I3 k

int main()
{
   double *A, *B, *C;
   int n = 2000;
   int i, j, k;
   char vars[3] = {'i', 'j', 'k'};

   i = 0; j = 1; k = 2;
   printf("Ordering: %c %c %c\n", vars[I1], vars[I2], vars[I3]);

   A = malloc(n * n * sizeof(double));
   B = malloc(n * n * sizeof(double));
   C = malloc(n * n * sizeof(double));
   for (i = 0; i < n * n; i++) {
      A[i] = 1.0;
      B[i] = 1.0;
      C[i] = 0.0;
   }

   for (I1 = 0; I1 < n; I1++) {
   for (I2 = 0; I2 < n; I2++) {
   for (I3 = 0; I3 < n; I3++) {
      C[i*n+j] += A[i*n+k] * B[k*n+j];
   }}}
   printf("Done\n");

   return 0;
}
