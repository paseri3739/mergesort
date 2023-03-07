#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int *arr, int N) {
    srand(time(NULL));  // initialize random seed
    
    for (int i = 0; i < N; i++) {
        arr[i] = rand() ;  // generate a random number
    }
}

void printArray(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MergeSort(int *arr, int N){
    
}

int main(int argc, char const *argv[])
{
    int N;
    N=100;
    int sorted[N];

    generate(sorted,N);
    printArray(sorted,N);
    return 0;
}
