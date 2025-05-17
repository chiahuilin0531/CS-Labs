//
//  main.c
//  20190110_FINAL-5
//
//  Created by cs nthu on 2019/1/10.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int a, b, dif;
    char s[21];
} Factory;

int cmps (const void * a, const void * b) {
    const Factory *pa = (const Factory *) a;
    const Factory *pb = (const Factory *) b;
    return strcmp(pa->s, pb->s);
}
int cmpdif (const void * a, const void * b) {
    const Factory *pa = (const Factory *) a;
    const Factory *pb = (const Factory *) b;
    return pb->dif - pa->dif;
}
int cmpvola (const void * a, const void * b) {
    const Factory *pa = (const Factory *) a;
    const Factory *pb = (const Factory *) b;
    return pb->a - pa->a;
}
int cmpvolb (const void * a, const void * b) {
    const Factory *pa = (const Factory *) a;
    const Factory *pb = (const Factory *) b;
    return pb->b - pa->b;
}
int cmpa (const void * a, const void * b) {
    const int *pa = (const int *) a;
    const int *pb = (const int *) b;
    return *pb - *pa;
}

int main() {
    
    int n, x, y, i, j, k, max=0, maxpt;
    scanf("%d%d%d", &n, &x, &y);
    int profita[n], profitb[n];
    Factory f[n];
    
    for (i=0; i<n; i++) {
        scanf("%s", f[i].s);
        scanf("%d%d", &f[i].a, &f[i].b);
        f[i].dif = f[i].a - f[i].b;
    }
    
    
    for (i=x; i<=n-y; i++) {
        
        Factory f1[n];
        for (j=0; j<n; j++) {
            f1[j] = f[j];
        }
        /*
        qsort(f1, n, sizeof(Factory), cmpvolb);
        int temp;
        do {
            temp = 0;
            for (j=0; j<i; j++) {
                for (k=n-1; k>=i; k--) {
                    if (f1[j].a < f1[k].a) {
                        temp = f1[j].a;
                        f1[j].a = f1[k].a;
                        f1[k].a = temp;
                    }
                }
            }
        } while (temp!=0);
         */
        qsort(&f1[i], n-i, sizeof(Factory), cmpvolb);
        qsort(f, n, sizeof(Factory), cmpdif);
        qsort(f, i, sizeof(Factory), cmpvola);
        
        int a1[1000]={0};
        for (j=0; j<x; j++) {
            a1[j] = f1[j].a;
        }
        for (j=n-1; j>=n-y; j--) {
            a1[j] = f1[j].a;
        }
        qsort(a1, n, sizeof(int), cmpa);
        
        
        profita[i] = 0;
        profitb[i] = 0;
        for (j=0; j<x; j++) {
            profita[i] += a1[j];
        }
        
        for (j=i; j<i+y; j++) {
            profitb[i] += f1[j].b;
        }
        if (profitb[i]+profita[i]>max) {
            max = profitb[i]+profita[i];
            maxpt = i;
        }
    }
    
    
    qsort(&f[i], n-i, sizeof(Factory), cmpvolb);
    qsort(f, n, sizeof(Factory), cmpdif);
    qsort(f, i, sizeof(Factory), cmpvola);
    
    int a1[1000]={0};
    for (j=0; j<x; j++) {
        a1[j] = f[j].a;
    }
    for (j=n-1; j>=n-y; j--) {
        a1[j] = f[j].a;
    }
    qsort(a1, n, sizeof(int), cmpa);
    
    
    profita[i] = 0;
    profitb[i] = 0;
    for (j=0; j<x; j++) {
        profita[i] += a1[j];
    }
    
    for (j=i; j<i+y; j++) {
        profitb[i] += f[j].b;
    }
    if (profitb[i]+profita[i]>max) {
        max = profitb[i]+profita[i];
        maxpt = i;
    }
    qsort(f, x, sizeof(Factory), cmps);
    
    for (i=0; i<x; i++) {
        printf("%s\n", f[i].s);
    }
    
    return 0;
}

/*
 
 10 3 4
 MELBOURNE 100 100
 BAHRAIN 20 90
 BARCELONA 30 80
 HUNGARORING 40 70
 SILVERSTONE 50 60
 SHANGHAI 60 50
 MONTECARLO 70 40
 SUZUKA 80 30
 BAKU 90 20
 GILLES 10 10
 
 */
