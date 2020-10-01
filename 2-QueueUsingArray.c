#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int arr[10];
}Queue;

Queue q;
int front=-1,rear=-1;

void enqueue(int n) {
    if(rear==-1){
        front=rear=0;  
        q.arr[rear]=n;
    }
    else if(rear<9)
        q.arr[++rear]=n;
}

int dequeue() {
    if(front==-1)
        return -1;
    else if(front == rear){
        int temp = front;
        front = -1;
        rear = -1;
        return q.arr[temp];
    }
    else
        return q.arr[front++];
}

bool isEmpty() {
    if(front == -1)
        return 1;
    return 0;   
}

bool isFull() {
    if(rear==9 && front==0)
        return 1;
    return 0;
}

int main() {
    int q, choice, n;
    scanf("%d", &q);
    while(q--) {
        scanf("%d%d", &choice, &n);
        switch(choice) {
            case 0: enqueue(n);
                    break;
            case 1: printf("%d\n", dequeue());
                    break;
            case 2: printf("%d\n", isEmpty());
                    break;
            case 3: printf("%d\n", isFull());
                    break;
            // case 4: ;
            //         Stack temp;
            //         pop(&temp);
            //         push(&temp, n);
            //         break;
        }
    }
    return 0;
}

