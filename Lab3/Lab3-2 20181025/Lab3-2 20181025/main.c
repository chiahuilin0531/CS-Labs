//
//  main.c
//  Lab3-2 20181025
//
//  Created by cs nthu on 2018/10/25.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    char x[n][10];
    char z;
    scanf("%c", &z);
    
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<10; j++) {
            scanf("%c", &x[i][j]);
            if (x[i][j]=='1') {
                scanf("%c", &z);
            }
        }
    }
    
    for (int j=0; j<9; j++) {
        scanf("%c", &x[n-1][j]);
        if (x[n-1][j]=='1') {
            scanf("%c", &z);
        }
    }
    
    for (int i=0; i<n; i++) {
        int ans = 1;
        int ch = 0;
        int a=20, b=30, c=40, d=50;
        
        if (x[i][0] == x[i][2]) {
            ans++;
        }else{
            ch++;
            a = x[i][2];
        }
        if (x[i][0] == x[i][4]) {
            ans++;
        }else{
            ch++;
            b = x[i][4];
        }
        if (x[i][0] == x[i][6]) {
            ans++;
        }else{
            ch++;
            c = x[i][6];
        }
        if (x[i][0] == x[i][8]) {
            ans++;
        }else{
            ch++;
            d = x[i][8];
        }
        
        if (ch>3||ch<2||ans>3||ans<2) {
            printf("NO\n");
        }
        else if(a==b||a==c||a==d||b==c||b==d||c==d){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
    /*
    printf("%c\n", x[0][0]);
    for (int i=0; i<n; i++) {
        for (int j=0; j<9; j++) {
            printf("%c", x[i][j]);
        }
        printf("\n");
    }
    
    
    
    detect();*/
    
    return 0;
}
