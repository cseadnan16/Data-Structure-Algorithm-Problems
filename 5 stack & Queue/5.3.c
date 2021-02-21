#include<stdio.h>
#define Q_SIZE 5

typedef struct{
    int data [Q_SIZE+1];
    int head, tail;
}Queue;

void enQueue(Queue *q, int item){
   /*printf("\nUnder EnQueue Function.\n");
    printf("Head = %d\n",q->head);
    printf("Tail 1st value = %d\n",q->tail);*/

    if((q->tail+1) % (Q_SIZE+1) == q->head){
        printf("Queue is full.\n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail+1) % (Q_SIZE+1);
    //printf("Tail 2nd value  = %d\n\n",q->tail);
}

int deQueue(Queue *q){
    int item;
    if(q->tail == q->head){
        printf("Queue is empty.\n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head+1) % (Q_SIZE+1);
    return item;
}

int main(){
    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;

    enQueue(&my_q, 10);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 72);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 93);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 44);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 57);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 6); // Queue is full
    printf("tail = %d\n", my_q.tail); // tail = 5

    printf("\nBeginning head = %d\n",my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);
    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);

    enQueue(&my_q, 6);
    printf("tail = %d\n", my_q.tail);

    item = deQueue(&my_q);
    printf("item = %d, head = %d\n", item, my_q.head);


}
