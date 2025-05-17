//
//  main.c
//  20181206 Mid2-3
//
//  Created by cs nthu on 2018/12/6.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
int n, ans=0, w[51];
int value(int x, int y);

void place(int x) {
    for (int y=1; y<=n; y++) {
        if (value(x, y)) {
            w[x]=y;
            if (x+1<=n) {
                place(x+1);
            } else {
                ans++;
            }
        }
    }
}

int value(int x, int y){
    for (int i=1; i<x; i++) {
        if ( y == w[i] || x-i == y - w[i] || i-x == y - w[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    
    scanf("%d", &n);
    place(1);
    
    printf("%d", ans);
    return 0;
}
