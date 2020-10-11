//Selection Sort algorithm

//Includings header files
#include<stdio.h>

//Swap function
void swap(int* a, int* b) 
    {
    int test = *a;
    *a = *b;
    *b = test;
    }

// Selection Sort function
void selection_sort(int arr[], int n) 
    {
    int min_idx; 
    for (int i = 0; i < n-1; i++) 
        { 
        min_idx = i; 
        for (int j=i+1; j<n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
        } 
    }

//main function
int main()
    {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
    selection_sort(arr, n);
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
        {
        printf("%d\t",arr[i]);
        }
    }