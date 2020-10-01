#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    /*
    The stack should contain an array to hold a maximum of 10 elements.
    */
    int arr[10];
} Stack;

/*
Initialising the stack, use this stack variable 's' in your functions.
*/
Stack s;
int top = -1;

void push(int n) {
    /*
    Push the integer n into the stack.
    Ignore if the operation is not possible.
    */
    if(top < 9){
        s.arr[++top] = n;
    }
}

int pop() {
    /*
    Pop the top element in the stack and return that element.
    Return -1 the operation is not possible.
    */
    int temp;
    if(top == -1){
        return -1;
    }
    else{
        temp = s.arr[top--];
        return temp;
    }
}

bool isEmpty() {
    /*
    Check if the stack is empty or not. Return true/false.
    */
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull() {
    /*
    Check if the stack is full or not. Return true/false.
    */
    if(top == 9)
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
            case 0: push(n);
                    break;
            case 1: printf("%d\n", pop());
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