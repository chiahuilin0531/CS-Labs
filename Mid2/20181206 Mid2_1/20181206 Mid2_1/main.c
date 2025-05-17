//
//  main.c
//  20181206 Mid2_1
//
//  Created by cs nthu on 2018/12/6.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
char map[1001][1001];
int m, n;

void check2(int i, int j){
    if (i<0 || j<0 || i>=m || j>=m) {
        
    } else if (map[i][j]=='@') {
        map[i][j]='~';
        check2(i+1, j);
        check2(i-1, j);
        check2(i, j+1);
        check2(i, j-1);
    }
}

void check3(int i, int j){
    if (i<0 || j<0 || i>=m || j>=m) {
        
    } else if (map[i][j]=='#') {
        map[i][j]='~';
        check3(i+1, j);
        check3(i-1, j);
        check3(i, j+1);
        check3(i, j-1);
    }
}


int main(int argc, const char * argv[]) {
    int ans2=0, ans3=0;
    
    scanf("%d%d", &m, &n);
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf(" %c", &map[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (map[i][j]=='@') {
                ans2++;
                check2(i, j);
            } else if (map[i][j]=='#') {
                ans3++;
                check3(i, j);
            }
        }
    }
    
    printf("%d %d\n", ans3, ans2);
    
    
    return 0;
}
/*
7 8
~~~~~~~~
~###~~~~
~##~~~~#
~~~@@@~~
~~~@@@~~
~~~~~~~~
~~~~##~~
*/
