#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
    Node *prev;
};

Node *create_node(int item, Node *next, Node *prev){
    Node *new_node;
    new_node = (Node *) malloc(sizeof(Node));
    if(new_node==NULL){
        printf("Error! could not create a new node.\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;

    return new_node;
}

Node *prepend(Node *head, int item){
    Node *new_node;
    new_node = create_node(item, head, NULL);

    new_node->next->prev = new_node;
    return new_node;
}

Node *append(Node *head, int item){
    Node *new_node;
    new_node = create_node(item, NULL, NULL);

    if(head == NULL){
        return new_node;
    }

    Node *current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
    new_node->prev = current_node;

    return head;
}

Node *remove_node(Node *head, Node *node){
    if(head == node){
        head = node->next;
        node->prev = NULL;
        free(node);
        return head;
    }
    node->prev->next = node ->next;

    /*Node *previous_node = node->prev;
    Node *next_node = node->next;
    previous_node->next = next_node;
    next_node->prev = previous_node;*/

    free(node);
    return head;
}

void insert(Node *node, int item){
    Node *new_node = create_node(item, node->next, NULL);

    node->next = new_node;
    new_node->prev = node;
}

void print_Linked_List(Node * head){
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d <-> ",current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}

int main(){
    Node *n1, *n2, *n3, *n4, *head;

    n1 = create_node(10, NULL, NULL);
    head = n1;
    print_Linked_List(head);

    n2 = prepend(head, 20);
    head = n2;
    print_Linked_List(head);

    n2 = prepend(head, 90);
    head = n2;
    print_Linked_List(head);

    n4 = prepend(head, 50);
    head = n4;
    print_Linked_List(head);

    n3 = append(head, 40);
    head = n3;
    print_Linked_List(head);

    printf("\nData Removing\n");
    head = remove_node(head, n1);
    print_Linked_List(head);

    head = remove_node(head, n2);
    print_Linked_List(head);


    printf("\nData Inserting\n");
    insert(n4, 10);
    print_Linked_List(head);


}
