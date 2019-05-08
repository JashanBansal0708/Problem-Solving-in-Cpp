// Function problem

{
//Initial Template for C
// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble(int arr[], int i, int n);

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
        bubble(arr, i, n);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("
");
}

// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C
/* The task is to complete bubble() which is used
   in below bubbleSort() */
/* Function to sort an array in ascending order using
   bubble sort
void bubbleSort(int arr[], int n)
{
   int i;
   for (i = 0; i < n-1; i++)
        bubble(arr, i, n);
} */
void bubble(int arr[], int i, int n)
{
    for(int j=0; j<n-i-1; j++){
        if(arr[j+1] < arr[j])
            swap(&arr[j+1] , &arr[j]);
    }
}
