//Bubble Sort algorithm

//Including header files
#include<stdio.h>

//Swap function
void swap(int* a, int* b) 
    {
    int test = *a;
    *a = *b;
    *b = test;
    }

// Bubble Sort function
void bubble_sort(int arr[], int n) 
    {
    for(int i = 0; i < n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]); 
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
    bubble_sort(arr, n);
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
        {
        printf("%d\t",arr[i]);
        }
    }