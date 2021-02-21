#include<stdio.h>
#include<stdbool.h>

#define SIZE 5

int ourQueue[SIZE];
int front = 0, rear = -1, totalItem = 0;

bool isfull(){
    if(totalItem == SIZE){
        return true;
    }
    return false;
}

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}

void enQueue(int item ){
    if(isfull()){
        printf("Sorry, the Queue is full.\n");
    }
    rear = (rear +1) % SIZE ;
    ourQueue[rear] = item;
    totalItem++;
}

int deQueue(){
    if(isEmpty()){
        printf("Sorry, the Queue is empty.\n");
        return -1;
    }
    int frontItem = ourQueue[front];
    ourQueue[front] = -1;
    front = (front+1) % SIZE;
    totalItem --;
    return frontItem;
}

void printQueue(){
    int i;
    printf("Queue: ");
    for(i=0;i<SIZE;i++){
        printf("%d ",ourQueue[i]);
    }
    printf("\n");
}
int main(){
    printQueue();
    printf("DeQueue: %d\n",deQueue());
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    printQueue();
    enQueue(50);
    printQueue();
    //enQueue(60);
    printf("DeQueue: %d\n",deQueue());
    printQueue();
    enQueue(60);
    printQueue();
    printf("DeQueue: %d\n",deQueue());
    printQueue();
    printf("DeQueue: %d\n",deQueue());
    printf("DeQueue: %d\n",deQueue());
    printf("DeQueue: %d\n",deQueue());
    printf("DeQueue: %d\n",deQueue());
    printQueue();

    return 0;

}
