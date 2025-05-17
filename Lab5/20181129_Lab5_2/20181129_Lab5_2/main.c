//
//  main.c
//  20181129_Lab5_2
//
//  Created by cs nthu on 2018/11/29.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>

char map[1000][1000];
int m, n, pond=0;

void check(int i, int j){
    if (map[i][j]=='~' && i>=0 && i<m && j>=0 && j<n) {
        map[i][j] = 'x';
        check(i+1, j);
        check(i-1, j);
        check(i, j+1);
        check(i, j-1);
    }
}

int main(int argc, const char * argv[]) {
    
    
    scanf("%d%d", &m, &n);
    
    
    
    for (int i=0; i<m; i++) {
        while (getchar()!='\n');
        for (int j=0; j<n; j++) {
            scanf("%c", &map[i][j]);
        }
    }
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (map[i][j]=='~') {
                pond++;
                check(i,j);
            }
        }
    }
    
    /*for (int i=0; i<m; i++) {
        
        for (int j=0; j<n; j++) {
            printf("%c", map[i][j]);
         
        }
        printf("\n");
    }*/
    
    printf("%d\n", pond);
    
    return 0;
}
