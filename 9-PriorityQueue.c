#include<stdio.h>

typedef struct {
    int a[10];
} Queue;

Queue q;
int front=0;
int rear=0;

void enqueue(int n) {
    int t,te;
    if(rear<9)
    {
        q.a[rear]=n;
        t=rear;
        while(q.a[t]<q.a[t-1] && t>front)
        {
            te=q.a[t];
            q.a[t]=q.a[t-1];
            q.a[t-1]=te;
            t--;
        }
        rear++;

    }
}

int dequeue() {
    if(rear == front)
    {
        return -1;
    }
    else 
    {
        front++;
        return q.a[front-1];   
    }
}

int main() {
    int q, choice, n;
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &choice);
        switch(choice) {
            case 1: scanf("%d",&n);
                    enqueue(n);
                    break;
            case 2: printf("%d\n", dequeue());
                    break;
        }
    }
    return 0;
}
