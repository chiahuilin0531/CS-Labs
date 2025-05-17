//
//  main.c
//  20181129_Lab5_2
//
//  Created by cs nthu on 2018/11/29.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>

char map[1000][1000];
int ans=0;
int m, n;

void check(int i, int j){
    if(ans==1){
        //printf("a\n");
        
    } else if(i<0 || j<0 || j >= n || i >= m){
        //printf("b\n");
        
    } else if (map[i][j]=='~'){
        //printf("c\n");
        ans = 1;
    } else if (map[i][j]=='.'||map[i][j]=='e') {
        if (ans == 0) {
            //printf("d\n");
            map[i][j] = '^';
            check(i+1, j);
            check(i-1, j);
            check(i, j+1);
            check(i, j-1);
        }
        
    }
}

int main(int argc, const char * argv[]) {
    
    int x=0, y=0;
    scanf("%d%d", &m, &n);
    
    for (int i=0; i<m; i++) {
        while (getchar()!='\n');
        for (int j=0; j<n; j++) {
            scanf("%c", &map[i][j]);
            if (map[i][j]=='e') {
                y = i;
                x = j;
            }
        }
    }
    //printf("y %d x %d\n", y, x);
    check(y,x);
    
    /*for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%c", map[i][j]);
            
        }
        printf("\n");
    }*/
    
    if(ans==1){
        printf("Alive!\n");
    }else if (ans==0){
        printf("Dead!\n");
    }
    
    return 0;
}

