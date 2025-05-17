//
//  main.c
//  Lab3 20181025
//
//  Created by cs nthu on 2018/10/25.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char in;
    scanf("%c", &in);
    
    
    for (int i = 'A'; i<=in; i++) {
        
        for (int j = 1; j <= in - i; j++) printf(" ");
        
        for (int c='A'; c <= i; c++) printf("%c", c);
        
        for (int c=i-1; c >= 'A'; c--) printf("%c", c);
        
        for (int j = 1; j <= in - i; j++) printf(" ");
        
        printf("\n");
    }

    return 0;
}
