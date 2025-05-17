//
//  main.c
//  20180110_FINAL-2
//
//  Created by cs nthu on 2019/1/10.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

Node* Create_List(Node* A, int n) {
    
    Node * node = (Node *) malloc(sizeof(Node));
    node->data = n;
    node->next = NULL;
    Node * temp;
    
     if (A==NULL) {
        A = node;
    } else {
        temp = A;
        while (temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next  = node;
    }
    
    return A;
    
}
Node* Reverse_List(Node* A) {
    Node * pre = NULL;
    Node * now = A;
    Node * temp;
    while (now!=NULL) {
        temp = now->next;
        now->next = pre;
        pre = now;
        now = temp;
    }
    return pre;
}

void Print_List(Node* A) {
    
    if (A!=NULL) {
        printf("%d", A->data);
        A = A->next;
    }
    
    while (A!=NULL) {
        printf("->%d", A->data);
        A = A->next;
    }
    printf("\n");
}
void Free_List(Node* A) {
    Node * temp;
    while (A!=NULL) {
        temp = A->next;
        free(A);
        A = temp;
    }
}
