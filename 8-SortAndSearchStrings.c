#include <stdio.h>
#include <stdbool.h>
#include<string.h>
void sort(char strings[][40], int n) {
    /*
    Sort the given array of strings
    n - Number of strings
    
    NOTE: strings dimensions are n x 30 (strings[n][30])
    */
    char temp[40];
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
}

bool search(char strings[][40], int n, char target[40]) {
    /*
    Binary Search for target string in strings array
    Return true if found, else false
    
    NOTE: strings array here can be assumed as sorted
    */
    int start, mid, end, flag = 0;
    start = 0;
    end = n - 1;
    mid = (start + end)/2;
    while (start <= end)
    {
        if(strcmp(strings[mid], target) > 0)
            end = mid - 1;
        else if(strcmp(strings[mid], target) == 0)
            return true;  
        else
            start = mid + 1;
        mid = (start + end)/2;
    }
    return false;
}
int main() {
    int i, q, t, n;
    char strings[100001][40], target[40];
    
    scanf("%d", &n);
    for(i = 0; i < n; ++i) {
        scanf("%s", strings[i]);
    }
    scanf("%d", &q);
    
    while (q--) {
        scanf("%d", &t);
        if (t == 1) {
            sort(strings, n);
        } else {
            scanf("%s", target);
            printf("%d\n", search(strings, n, target));
        }
    }
}