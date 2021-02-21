#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int data;
    struct Node *next;
}Node;

int main(){
     Node *a = NULL;
     Node *b = NULL;
     Node *c = NULL;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    // Traverse a linked list
    while(a != NULL){
        printf("%d -> ",a->data);
        a = a->next;
    }
    printf(" NULL\n");
}

