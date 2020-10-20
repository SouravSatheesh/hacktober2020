#include <stdio.h> 
void swap();  
void selection_sort(int arr[], int n) 
{ 
    int i, j,smallest; 
    for (i = 0; i < n-1; i++) 
    { 
        smallest = i; 
        for (j = i+1; j < n; j++) 
        {
          if (arr[j] < arr[smallest]) 
          {
            smallest = j; 
          }
        }
        swap(&arr[smallest], &arr[i]); 
    } 
} 

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void show(int arr[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int arr[10],n,i;
    printf("\nenter the size");
    scanf("%d",&n);
    printf("\n enter the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    selection_sort(arr, n); 
   printf("Sorted array: \n"); 
    show(arr, n); 
    return 0; 
}

/* #include <stdio.h> 
void swap();  
void selection_sort(int arr[], int n) 
{ 
    int i, j,smallest; 
    for (i = 0; i < n-1; i++) 
    { 
        smallest = i; 
        for (j = i+1; j < n; j++) 
        {
          if (arr[j] < arr[smallest]) 
          {
            smallest = j; 
          }
        }
        int temp = arr[i]; 
        arr[i]= arr[smallest]; 
        arr[smallest]= temp;
        //swap(arr[smallest], arr[i]); 
    }
    for (i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

} 

int main() 
{ 
    int arr[10],n,i;
    printf("\nenter the size");
    scanf("%d",&n);
    printf("\n enter the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    selection_sort(arr, n); 
       return 0; 
} */


