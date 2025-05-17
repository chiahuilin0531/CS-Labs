#include <stdio.h>
#include <stdlib.h>
#include "function.h"


Point * ones_vec_1(int length) {
    Point *a = (Point *) malloc(length * sizeof(Point));
    for (int i=0; i<length; i++) {
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    return a;
    
}


float compute_distance(Point* a, int first_id, int second_id) {
    float ans;
    ans = sqrt( ( a[first_id].x - a[second_id].x )*( a[first_id].x - a[second_id].x ) + ( a[first_id].y - a[second_id].y )*( a[first_id].y - a[second_id].y ));
    return ans;
}
