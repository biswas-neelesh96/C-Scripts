//Insertion Sort algorithm

//Including header files
#include<stdio.h>

//Insertion Sort fucntion
void insertion_sort(int arr[], int size)
    {
    int key, j; 
    for (int i=1; i<size; i++)
        {
        key = arr[i]; 
        j = i-1;
        while (j>=0 && arr[j]>key)
            { 
            arr[j+1] = arr[j]; 
            j = j-1; 
            } 
        arr[j+1] = key; 
        } 
    }

//Main function
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
    insertion_sort(arr, n);
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
        {
        printf("%d\t",arr[i]);
        } 
    }