#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
};

Node *create_tree_node(int item){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! could not create a new node.\n");
        exit(1);
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child){
    node->left = child;
}

void add_right_child(Node *node, Node *child){
    node->right = child;
}

Node *create_tree(){

    Node *two = create_tree_node(2);
    Node *seven = create_tree_node(7);
    Node *nine = create_tree_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_tree_node(1);
    Node *six = create_tree_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_tree_node(5);
    Node *ten = create_tree_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_tree_node(8);
    add_right_child(nine, eight);

    Node *three = create_tree_node(3);
    Node *four = create_tree_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;
}

void pre_order(Node *node){
    printf("%d ", node->data);

    if(node->left != NULL){
        pre_order(node->left);
    }
    if(node->right != NULL){
        pre_order(node->right);
    }
}

void post_order(Node *node){

    if(node->left != NULL){
        post_order(node->left);
    }
    if(node->right != NULL){
        post_order(node->right);
    }
    printf("%d ", node->data);
}

void in_order(Node *node){

    if(node->left != NULL){
        in_order(node->left);
    }

    printf("%d ", node->data);

    if(node->right != NULL){
        in_order(node->right);
    }
}

int main(){
    Node *root = create_tree();

    printf("Pre Order: ");
    pre_order(root);
    printf("\n");

    printf("Post Order: ");
    post_order(root);
    printf("\n");

    printf("In Order: ");
    in_order(root);
    printf("\n");

    return 0;
}
