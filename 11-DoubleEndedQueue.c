#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int queue[20],q,ele,t,front=-1,rear=-1;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&t);
        if(t==1)
        {
            scanf("%d",&ele);
           if(rear==-1 && front==-1){
               rear=0;
               front=0;
               queue[front]=ele;
           }
           else if(front==0){
               front=19;
               queue[front]=ele;

           }
           else{
               front--;
               queue[front]=ele;
           }

        }
        else if(t==2)
        {
           scanf("%d",&ele);

            if(rear==-1 && front==-1){
               rear=0;
               front=0;
               queue[front]=ele;
           }
           else if(rear==19){
               rear=0;
               queue[rear]=ele;
           }
           else{
               rear++;
               queue[rear]=ele;
           }
        }
        else if(t==3)
        {
            if(front==rear){
                printf("%d\n",queue[front]);
                front=-1;
                rear=-1;
            }
            else if(front==19){
                printf("%d\n",queue[front]);
                front=0;
            }
            else{
                printf("%d\n",queue[front]);
                front++;
            }
        }
        else if(t==4)
        {
            if(front==rear){
                printf("%d\n",queue[rear]);
                front=-1;
                rear=-1;
            }
            else if(rear==0){
                printf("%d\n",queue[rear]);
                rear=19;
            }
            else{
                printf("%d\n",queue[rear]);
                rear--;
            }
        }
        else
        {
            int i=front;
            while(i!=rear+1){
                printf("%d ",queue[i]);
                i=(i+1)%20;
            
         }
          printf("\n");
    }
    }
    return 0;
}