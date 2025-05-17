//
//  main.c
//  20181206 Mid2-4
//
//  Created by cs nthu on 2018/12/6.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
int c, f, h, s, maximum, j=0;
char dir;
char map[30][60];

void shooting(int i){
    map[i][j]='*';
    
    if (dir=='u') {
        if (i<=1) {
            if (j>=c) {
                //printf("u end j+1=%d\n", j+1);
                map[i-1][j+1] = '*';
                if (j+1 > maximum) maximum = j+1;
            } else {
                //printf("u->d\n");
                dir = 'd';
                j++;
                shooting(i+1);
            }
        } else {
            //printf("u keep\n");
            j++;
            shooting(i-1);
        }
    } else if (dir=='d') {
        if (i >= h) {
            if (j>=f) {
                //printf("d end\n");
                map[i+1][j+1] = '*';
                if (j+1 > maximum) maximum = j+1;
            } else {
                //printf("d->u\n");
                dir = 'u';
                j++;
                shooting(i-1);
            }
        } else {
            //printf("d keep\n");
            j++;
            shooting(i+1);
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d%d%d%d", &c, &f, &h, &s);
    scanf(" %c", &dir);
    if (c>f) {
        maximum = c-1;
    } else maximum = f-1;
    
    for (int i=0; i<30; i++) {
        for (int k=0; k<60; k++) {
            map[i][k] = ' ';
        }
    }
    /*for (int i=0; i<30; i++) {
        for (int k=0; k<30; k++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }*/
    //printf("%d\n", s);
    shooting(s);
    
    for (int i=0; i<c; i++)  map[0][i] = '-';
    for (int i=0; i<f; i++)  map[h+1][i] = '-';
    
    for (int i=0; i<=h+1; i++) {
        for (int k=0; k<=maximum; k++) {
            printf("%c", map[i][k]);
        }
        printf("\n");
    }
    return 0;
}
