//
//  main.c
//  20190110_FINAL-3
//
//  Created by cs nthu on 2019/1/10.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int n, k=0, i, j, l, max=0;
    long long ans=0;
    scanf("%d", &n);
    int a[n];
    unsigned long long b[n][30];
    for (i=0; i<n; i++) {
        for (j=0; j<30; j++) {
            b[i][j]=0;
        }
    }
    
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
        
        int c = a[i];
        j=1;
        if (c==0) {
            b[i][j] = 0;
            j++;
        }
        while (c>0) {
            b[i][j] = c%2;
            c /= 2;
            j++;
        }
        if (j-1>max) {
            max = j-1;
        }
    
    }
    
    for (i=1; i<=max; i++) {
        int zeros=0, ones=0;
        for (j=0; j<n; j++) {
            if (b[j][i]==1) {
                ones++;
            } else if (b[j][i]==0) zeros++;
        }
        //printf("%d %d\n", zeros, ones);
        if (ones>zeros) {
            int temp=1;
            for (l=1; l<i; l++) {
                temp *= 2;
            }
            k += temp;
        }
    }
    if (n==1) {
        ans = 0;
    } else {
        for (i=0; i<n; i++) {
            ans += a[i]^k;
        }
    }
    
    
    printf("%lld\n", ans);
    
    
    return 0;
}
