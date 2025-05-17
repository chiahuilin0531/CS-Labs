//
//  main.c
//  20181011-2
//
//  Created by cs nthu on 2018/10/11.
//  Copyright © 2018年 cs nthu chiahui. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i , N;
    
    scanf("%d",&N);
    double p[N][2][2], a[N];
    int d[N];
    
    for(i=0;i<N;i++){
        scanf("%lf", &p[i][0][0]);
        scanf("%lf", &p[i][0][1]);
        scanf("%lf", &p[i][1][0]);
        scanf("%lf", &p[i][1][1]);
        scanf("%lf", &a[i]);
        
        double vb[2], va[2];
        vb[0] = 1;
        vb[1] = 0;
        for ( d[i]=1; vb[0]>a[i]; d[i]++) {
            va[0] = vb[0]*p[i][0][0] + vb[1]*p[i][0][1];
            va[1] = vb[0]*p[i][1][0] + vb[1]*p[i][1][1];
            
            vb[0] = va[0];
            vb[1] = va[1];
        }
    }
    
    for (i=0; i<N; i++) {
        printf("%d\n", d[i]-1);
    }
    
    
    return 0;
}
