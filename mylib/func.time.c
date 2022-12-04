#include <time.h>
#include <stdio.h>

double getDuration (void matVecMult(int*, int*, int*, int), int* M, int*v, int*x, int SIZE){
    int start = clock();
    matVecMult(M, v, x, SIZE);
    int end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}

double getDurationWithLoop (void matVecMult(int*, int*, int*, int), int parameter, int* M, int*v, int*x, int SIZE){
    int start = clock();
    
    for(int i = 0; i < parameter; i++){
        matVecMult(M, v, x, SIZE);
    }
    int end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}