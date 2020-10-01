#include <stdio.h>

int front= -1, rear= -1;

void insert(int q[], int num) {
    if(rear == -1) {
        rear++;
        front++;
    }
    else if(rear == 19 && front > 0)
        rear = 0;
    else 
        rear++;
    q[rear] = num;
}

void deleteq(int q[]) {
    int value;
    value = q[front];
    if (front == rear)
    {
        front =  - 1;
        rear =  - 1;
    }
    else
        front++;
    printf("%d\n",value);
}

void display(int q[]) {
    int i;
    if (front > rear)
    {
        for (i = front; i < 20; i++)
        {
            printf("%d ", q[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", q[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", q[i]);
    }
    printf("\n");
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, t, queue[20], ele;
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &t);
        if(t == 1) {
            scanf("%d", &ele);
            insert(queue, ele);
        }
        else if(t == 2) 
            deleteq(queue);
        else if(t == 3) 
            display(queue);
    }
    return 0;
}