//
//  main.c
//  20181011-1
//
//  Created by cs nthu on 2018/10/11.
//  Copyright © 2018年 cs nthu chiahui. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[9], p[9], n, x, sum=0;
    for ( int i=0; i<=8; i++) {
        scanf("%d",&a[i]);
    }
    
    p[0] = a[0];
    
    for (n=1; ; n++) {
        x = p[n-1];
        
        if (x==1) {
            break;
        } else{
            p[n] = a[x-1];
        }
        
    }
    for (int i=0; i<n; i++) {
        //printf("%d ", p[i]);
        sum += p[i];
    }
    
    
    printf("%d\n", sum);
    
    return 0;
}
