//
//  main.c
//  20181129_Lab5_3
//
//  Created by cs nthu on 2018/11/29.
//  Copyright © 2018年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include "function.h"
void array_exchanger(int* array_a, int* array_b, int length) {
    for (int i=0; i<length; i++) {
        int temp = * (array_a +i);
        * (array_a +i) = * (array_b +i);
        * (array_b +i) = temp;
    }
    
}


