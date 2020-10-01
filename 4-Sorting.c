#include <stdio.h>

void bubbleSort(int arr[], int n) {
    /* 
    Sort the arr using the Bubble Sort algorithm
    Arguments:
        1. arr - array to be sorted
        2. n - length of array
    */
    int temp;
    for(int j = 0; j < n - 1; j++)
    {
        for(int i = 0; i < n - j - 1; i++)
        {
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    /* 
    Sort the arr using the Bubble Sort algorithm
    Arguments:
        1. arr - array to be sorted
        2. n - length of array
    */
    int j, key;
    for(int  i = 1; i <n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int n) {
    /* 
    Sort the arr using the Bubble Sort algorithm
    Arguments:
        1. arr - array to be sorted
        2. n - length of array
    */
    int temp,min_index;
    for(int i = 0; i < n-1; i++)
    {
        min_index = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int q, n, t;
    int arr[5000];
    
    scanf("%d", &q);
    
    while (q--) {
        scanf("%d%d", &t, &n);
        int i;
        
        for(i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
    
        if (t == 1) {
            bubbleSort(arr, n);
        } else if (t == 2) {
            insertionSort(arr, n);
        } else {
            selectionSort(arr, n);
        }
        
        for(i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}