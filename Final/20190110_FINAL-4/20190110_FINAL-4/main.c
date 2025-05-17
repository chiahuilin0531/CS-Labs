//
//  main.c
//  20190110_FINAL-4
//
//  Created by cs nthu on 2019/1/10.
//  Copyright © 2019年 cs nthu. All rights reserved.
//
#define dis 1000
#include <stdio.h>
#include <stdlib.h>

float A[1001][1001]={0}, t[1001];

int cmp (const void * a, const void * b) {
    const float *pa = (const float *) a;
    const float *pb = (const float *) b;
    if (pa[dis]>pb[dis]) {
        return 1;
    } else return 0;
}

int main() {
    
    int i, j, N, D, k;
    scanf("%d%d%d", &N, &D, &k);
    
    for (i=0; i<N; i++) {
        for (j=0; j<D; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    
    for (i=0; i<D; i++) {
        scanf("%f", &t[i]);
    }
    
    for (i=0; i<N; i++) {
        A[i][dis] = 0;
        for (j=0; j<D; j++) {
            
            A[i][dis] += ( A[i][j]-t[j] ) * ( A[i][j]-t[j] );
            
        }
        //printf("%.1f\n", A[i][dis]);
        /*
         if (i==0) {
            min = dis[i];
            minpt = 0;
        } else if (dis[i]<min) {
            min = dis[i];
            minpt = i;
        }*/
    }
    qsort(A, N, sizeof(float)*1001, cmp);
    printf("%.1f", A[k-1][0]);
    
    for (i=1; i<D; i++) {
        printf(" %.1f", A[k-1][i]);
    }
    printf("\n");
    
    
    return 0;
}
