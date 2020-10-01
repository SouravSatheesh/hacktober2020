#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[100], q, t, len=0, ele, smallest, value;
    scanf("%d",&q);
    while(q--) {
        scanf("%d",&t);
        if(t == 1) {
            scanf("%d",&ele);
            arr[len++] = ele;
        }
        else if(t == 2) {
            smallest = 0;
            for(int i = 1; i < len; i++) {
                if(arr[i] < arr[smallest])
                    smallest = i;
            }
            value = arr[smallest];
            for(int i = smallest; i < len; i++) {
                arr[i] = arr[i+1];
            }
            len--;
            printf("%d\n", value);
        }
    }
    return 0;
}