//
//  main.c
//  20181206 Mid2-2
//
//  Created by cs nthu on 2018/12/6.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void max_pooling(int A[500][500], int H, int W, int k){
    
    for (int i=0; i< H/k; i++) {
        for (int j=0; j< W/k; j++) {
            int max = A[i*k][j*k];
            for (int y=i*k; y<i*k+k; y++) {
                for (int x=j*k; x<j*k+k; x++) {
                    if ( A[y][x]>=max) {
                        max = A[y][x];
                    }
                    //A[y][x] = 0;
                }
            }
            A[i][j] = max;
        }
    }
    /*for (int i=0; i< H; i++) {
        for (int j=0; j< W; j++) {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }*/
    
    /*int max=0;
    for (int i=0; i<k; i++) {
        for (int j=0; j<k; j++) {
            if (A[i][j]>max) {
                max = A[i][j];
            }
        }
    }
    B[x][y] = max;*/
    
}
/*
 4 6 2
 1 2 3 4 5 6
 6 5 4 3 2 1
 9 8 7 6 5 4
 4 5 6 7 8 9
*/
