//
//  main.c
//  20181115 Mid-2
//
//  Created by cs nthu on 2018/11/15.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i=n-1; i>=0; i--) {
            int temp, k=0;
            for (int j=0; j<i; j++) {
                if (a[j+1]<a[j]) {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    k=1;
                }
            }
            if (k==0) break;
        }
        /*for (int i=0; i<n-1; i++) {
            printf("%d ", a[i]);
        }
         printf("%d\n", a[n-1]);*/
        int d=0;
        for (int i=0; i<n-1; i++) {
            if(a[i+1]-a[i]>d) d=a[i+1]-a[i];
        }
        printf("%d\n", d);
    }
    
    return 0;
}

/*
 3
 3
 1 4 2
 4
 1 -2 -5 -1
 6
 2 3 5 8 13 15
 */
