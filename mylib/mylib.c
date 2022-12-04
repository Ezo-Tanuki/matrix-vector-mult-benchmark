#include <stdio.h>
#include <stdlib.h>

void matrixVecMul(int* M, int*v, int*x, int SIZE){
    for(int i = 0; i < SIZE; i++){
        x[i] = 0;

        for (int j = 0; j < SIZE; j++)
        {
            x[i] += M[i*SIZE+j] * v[j];
        }
    }

}

void initMatRandInt(int* M, int lower, int upper, int SIZE){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++)
        {
            M[i*SIZE+j] = (rand() % (upper-lower+1)) + lower;
        } 
    }
}

void initVecRandInt(int* N, int lower, int upper, int SIZE){
    for (int i = 0; i < SIZE; i++){
        N[i] = (rand() % (upper-lower+1)) + lower;
    }
}

void printMat(int* M, int SIZE){
    printf("[\n");
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d,  ", M[i*SIZE+j]);
        }
        printf("\n");
    }
    printf("]\n");
}

void printVec(int* v, int SIZE){
    printf("[\n");
    for (int i = 0; i < SIZE; i++){
            printf("%d,\n", v[i]);
    }
    printf("]\n");
}