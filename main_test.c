#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"



int main(void){
    int SIZE = 3;

    int* M = (int*) malloc(SIZE * SIZE * sizeof(int));
    int* v = (int*) malloc(SIZE * sizeof(int));
    int* x = (int*) malloc(SIZE * sizeof(int));

    initMatRandInt(M, 0, 9, SIZE);
    initVecRandInt(v, 0, 9, SIZE);

    matrixVecMul(M, v, x, SIZE);

    printf("M =");
    printMat(M, SIZE);
    printf("v =");
    printVec(v, SIZE);
    printf("x =");
    printVec(x, SIZE);

    free(M);
    free(v);
    free(x);
    return 0;
}