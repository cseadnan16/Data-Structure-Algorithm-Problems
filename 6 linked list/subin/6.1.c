#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};


Node *create_node(int item, Node *next){
    Node *new_node;
    new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! could not create a new node.\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;

    return new_node;
}

Node *prepend(Node *head, int item){
    Node *new_node;
    new_node = create_node(item, head);
    return new_node;
}

Node *append(Node* head, int item){
    Node *new_node;
    new_node = create_node(item, NULL);

    if(head == NULL){
        return new_node;
    }

    Node *current_node = head;
    //int count = 0;
    while(current_node->next != NULL){
        //printf("Next Node address: %p\n",current_node->next);
        //count++;
        //printf("count = %d\n",count);
        //printf("Current node value: %d\n", current_node->data);
        current_node = current_node->next;
        //printf("Current Node address: %p\n",current_node);
        //printf("Current node value: %d\n", current_node->data);
    }
    current_node->next = new_node;
    return head;
}

int count(Node *head){
    Node *current_node = head;
    int node_count = 0;
    while(current_node != NULL){
        node_count++;
        current_node = current_node->next;
    }
    return node_count;
}

void search(Node *head, int item){
    Node *current_node = head;

    while(current_node != NULL){
        if(current_node->data == item){
            break;
        }
        current_node = current_node->next;
    }

    if(current_node){
        printf("Your data %d is found.\n", item);
    }else{
        printf("Your data %d is not found.\n", item);
    }
}

Node *remove_node(Node *head, Node *node){
    if(node == head){
        head = node->next;
        free(node);
        return head;
    }
    Node *current_node = head;
    while(current_node != NULL){
        if(current_node->next == node){
            break;
        }
        current_node = current_node->next;
    }
    if(current_node == NULL){
        return head;
    }

    current_node->next = node->next; // remove node
    free(node);
    return head;
}

void insert(Node *node, int item){
    Node *new_node = create_node(item, node->next);
    node->next = new_node;
}

void print_Linked_List(Node *head){
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d -> ",current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}

int main(){
    Node *n1, *n2, *n3, *n4, *head;
    int item;

    n1 = create_node(10, NULL);
    head = n1;
    print_Linked_List(head);

    n2 = prepend(head, 20);
    head = n2;
    print_Linked_List(head);

    n4 = prepend(head, 50);
    head = n4;
    print_Linked_List(head);

    n2 = prepend(head, 90);
    head = n2;
    print_Linked_List(head);

    n3 = append(head, 30);
    head = n3;
    print_Linked_List(head);

    printf("Total Node: %d\n", count(head));

    /*printf("\nSearch any data: ");
    scanf("%d", &item);
    search(head, item);*/

    printf("\nData Removing\n");
    head = remove_node(head, n1);
    print_Linked_List(head);

    printf("\nData Inserting\n");
    insert(n4, 10);
    print_Linked_List(head);

    return 0;
}

