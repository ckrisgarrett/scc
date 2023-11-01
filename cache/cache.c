#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KB 1024
#define MB 1024 * 1024

int main() {
    unsigned int steps = 256 * 1024 * 1024;
    static char arr[64 * MB];
    int lengthMod;
    unsigned int i;
    double timeTaken;
    clock_t start;
    int sizes[] = {
        4 * KB, 8 * KB, 16 * KB, 32 * KB, 64 * KB, 128 * KB, 256 * KB,
        512 * KB, 1 * MB, 2 * MB, 4 * MB, 8 * MB, 16 * MB, 32 * MB, 64 * MB
    };
    int s;

    // for each size to test for ...
    unsigned a = 1;
    unsigned b = 2;
    unsigned c = 3;
    for (s = 0; s < sizeof(sizes)/sizeof(int); s++) {
        lengthMod = sizes[s] - 1;
        start = clock();
        for (i = 0; i < steps; i++) {
            a = b;
            b = c;
            c = a + b;
            arr[c & lengthMod] *= 10;
            arr[c & lengthMod] /= 10;
        }

        timeTaken = (double)(clock() - start)/CLOCKS_PER_SEC;
        printf("%d, %.8f \n", sizes[s] / KB, timeTaken);
    }

    return 0;
}
