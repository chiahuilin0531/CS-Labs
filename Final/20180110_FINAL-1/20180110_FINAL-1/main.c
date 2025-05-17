//
//  main.c
//  20180110_FINAL-1
//
//  Created by cs nthu on 2019/1/10.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int T, i, j, k, ans=0;
    scanf("%d", &T);
    
    for (i=0; i<T; i++) {
        ans = 0;
        char s[2][201];
        scanf("%s%s", s[0], s[1]);
        int slen0 = strlen(s[0]);
        int slen1 = strlen(s[1]);
        //printf("%s\n%s\n\n", s[0], s[1]);
        //printf("\n%d %d\n", slen0, slen1);
        /*for (j=0; j<slen0; j++) {
            s[0][slen0+j] = s[0][j];
        }*/
        for (j=0; j<slen1; j++) {
            s[1][slen1+j] = s[1][j];
        }
        //printf("\n%s\n", s[1]);
        
        for (j=0; j<slen1; j++) {
            if (s[0][0] == s[1][j]) {
                for (k=1; k<slen0; k++) {
                    if (s[0][k]!=s[1][j+k]) {
                        break;
                    }
                }
                if (k==slen0) {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 1) {
            printf("Yes\n");
        } else if (ans == 0) {
            printf("No\n");
        }
    }
    
    
    
    return 0;
}
