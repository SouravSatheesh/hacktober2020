#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m, i;
    int *first, *second, *sum;
    scanf("%d%d",&n,&m);
    first = (int *)malloc((n+1) * sizeof(int));
    second = (int*)malloc((m+1) * sizeof(int));
    for(int i = n; i >= 0; i--)
        scanf("%d",&first[i]);
    for(int i = m; i >= 0; i--)
        scanf("%d",&second[i]);
    if(m > n)
        sum = (int*)malloc((m+1) * sizeof(int));
    else
        sum = (int*)malloc((n+1) * sizeof(int));
    i = 0;
    while (i <= n && i <= m) {
        sum[i] = first[i] + second[i];
        i++;
    }
    while (i <= n) {
        sum[i] = first[i];
        i++;
    }
    while (i <= m) {
        sum[i] = second[i];
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
        printf("%d ",sum[j]);
    return 0;
}