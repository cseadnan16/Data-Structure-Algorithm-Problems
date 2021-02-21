#include<stdio.h>
#define LENGTH 3

int stack[LENGTH];
int top = -1;

void push(int x){

    if(top<LENGTH-1){
        top = top+1;
        stack[top] = x;
        printf("Succesfully added item: %d\n",stack[top]);
    }else{
        printf("Execption! No space.\n");
    }
}

int pop(){
    if(top>=0){
        int val = stack[top];
        top = top-1;
        return val;
    }
    printf("Execption from pop! empty stack.\n");
    return -1;
}

int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("Execption from peek! empty stack.\n");
    return -1;
}

int main(){
    peek();
    push(10);
    push(20);
    push(30);
    printf("Top value from pop: %d\n",pop());
    push(40);

    printf("\nPeek top value: %d\n",peek());

    return 0;
}
