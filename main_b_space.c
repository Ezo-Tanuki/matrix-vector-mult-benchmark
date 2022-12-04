#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "mylib/func.time.h"

int main(void){
    int parameter = 1000;
    
    int* M = (int*) malloc(parameter * parameter * sizeof(int));
    int* v = (int*) malloc(parameter * sizeof(int));
    int* x = (int*) malloc(parameter * sizeof(int));

    printf("press Ctrl + C to interrupt the process\n");
    printf("parameter: %d\n", parameter);

    while(1){
        getDuration(matrixVecMul, M, v, x, parameter);

    }
    
    free(M);
    free(v);
    free(x);

    return 0;
}