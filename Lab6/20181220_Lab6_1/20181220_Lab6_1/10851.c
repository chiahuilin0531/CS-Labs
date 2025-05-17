
#include <stdio.h>
#include "function.h"

void execInst(int *ptrArr[], char inst, int param1, int param2){
    if(inst=='S'){
        *ptrArr[param1] = param2;
    }
    else if(inst=='M'){
        *ptrArr[param1] *= param2;
    }
    else if(inst=='P'){
        ptrArr[param1] = ptrArr[param2];
    }
}

int findMax(int *ptrArr[], int start, int end){
    
    int max = *ptrArr[start];
    
    for (int i=start; i<=end; i++) {
        if (max < *ptrArr[i]) {
            max = *ptrArr[i];
        }
    }
    
    return max;
}
