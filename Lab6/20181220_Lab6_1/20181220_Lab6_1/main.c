//
//  main.c
//  20181220_Lab6_1
//
//  Created by cs nthu on 2018/12/20.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include "function.h"

#define SIZE 100

int main() {
    int *ptrArr[SIZE];
    int dataArr[SIZE] = {0};
    char inst;
    int dataNum, instNum;
    int param1, param2;
    int start, end;
    int i;
    
    /* input */
    scanf("%d %d", &dataNum, &instNum);
    
    /* initialize the ptrArr */
    for (i = 0; i < dataNum; i++)
        ptrArr[i] = &dataArr[i];
    
    for (i = 0; i < instNum; i++) {
        scanf(" %c %d %d", &inst, &param1, &param2);
        execInst(ptrArr, inst, param1, param2);
    }
    scanf("%d %d", &start, &end);
    /* output */
    for (i = 0; i < dataNum - 1; i++) {
        printf("%d ", dataArr[i]);
    }
    printf("%d\n", dataArr[i]);
    for (i = 0; i < dataNum - 1; i++) {
        printf("%d ", *ptrArr[i]);
    }
    printf("%d\n", *ptrArr[i]);
    
    
    printf("%d\n", findMax(ptrArr , start, end));
    
    return 0;
}

