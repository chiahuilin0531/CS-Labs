//
//  main.c
//  20190103_Lab7_Delete Last Node
//
//  Created by cs nthu on 2019/1/3.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

//
//  main.c
//  20190103_Lab7_Delete Middle Node
//
//  Created by cs nthu on 2019/1/3.
//  Copyright © 2019年 cs nthu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void Create_List(Node** head, int data)
{
    if(*head==NULL){
        *head = (Node*)malloc(sizeof(Node));
        (*head)->data = data;
        (*head)->next = NULL;
    }
    else{
        Node* temp = *head;
        while(temp->next!=NULL) temp = temp -> next;
        Node* new_node = (Node*) malloc(sizeof(Node));
        temp->next = new_node;
        new_node->next = NULL;
        new_node->data = data;
    }
}

Node* Delete_Last_Node(Node* x) {
    Node *temp = x;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
    return x;
}
void Print_List(Node* x) {
    if (x!=NULL) {
        printf("%d", x->data);
        while (x->next!=NULL) {
            x = x->next;
            printf("->%d",x->data);
        }
    }
    printf("\n");
}
void Free_List(Node* x){
    Node * temp=x;
    while (temp!=NULL) {
        temp = x->next;
        free(x);
        x = temp;
    }
    
}

