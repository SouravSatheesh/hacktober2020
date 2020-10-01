#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct {
    /*
    The queue should contain an array to hold a maximum of 10 elements.
    */
    int arr[50];
} Queue;

/*
Initialising the queue, use this queue variable 'q' in your functions.
*/
Queue q;
int front = 0, end = 0;

void enqueue(int n) {
    /*
    Enqueue the integer n into the queue.
    Ignore if the operation is not possible.
    */
    if(end - front < 9){
        q.arr[end++] = n;
    }
}

int dequeue() {
    /*
    Dequeue the front element from the queue and return that element.
    Return -1 the operation is not possible.
    */
    int temp;
    if(end == front){
        return -1;
    }
    else{
        temp = q.arr[front++];
        return temp;
    }
}

bool isEmpty() {
    /*
    Check if the queue is empty or not. Return true/false.
    */
    if(end == front)
        return true;
    else
        return false;
}

bool isFull() {
    /*
    Check if the queue is full or not. Return true/false.
    */
    if(end - front == 9)
        return true;
    else
        return false;
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