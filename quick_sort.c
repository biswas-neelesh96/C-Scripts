//Quick Sort algorithm

//Including header files
#include<stdio.h>

//Swap function
void swap(int* a, int* b) 
    {
    int test = *a;
    *a = *b;
    *b = test;
    }

//Partition function
int partition(int arr[], int first, int last)
    {
    int pivot = arr[last];
    int i = (first - 1); 
    for (int j=first; j<=last-1; j++) 
        { 
        if (arr[j]<pivot)
            { 
            i++;
            swap(&arr[i], &arr[j]);
            } 
        } 
    swap(&arr[i+1], &arr[last]);
    return (i+1);
    }

//Quick Sort function
int* quick_sort(int arr[], int first, int last)
    {
    if (first < last) 
        { 
        int pivot = partition(arr, first, last);
        quick_sort(arr, first, pivot-1); 
        quick_sort(arr, pivot+1, last); 
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
    quick_sort(arr, 0, n-1);
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
        {
        printf("%d\t",arr[i]);
        }
    }