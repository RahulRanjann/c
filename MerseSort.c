#include <stdio.h>

void printArray(int *A[],int size)
{   printf("Array :- \n");
    for(int i =0; i<size; i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}
void merge(int A[],int mid, int low,int high)
{
    int i,j,k, B[100];
    i = low;
    j= mid+1;
    k= low;
    while (i<=mid && j<= high)
    {
        if (A[i]<A[j])
        {
           B[k] = A[i];
           k++;
           i++;
        }
        else
        {
            B[k]=A[j];
            k++;
            j++;
        }
    }
        while (i<=mid)
        {
            B[k] = A[i];
            k++;
            i++;
        }
        while (j<=high)
        {
           B[k] = A[j];
            k++;
            j++;
        }
        for (int i = low; i <= high; i++)
        {
            A[i]=B[i];
        }

}

void MergeSort(int A[], int low, int high)
{
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        merge(A,mid,low, high);

    }

}
int main() {
   int A[] = {9,1,4,14,4,15,6};
   int n =sizeof(A)/sizeof(A[0]);
   printf("Size of array is %d \n",n);
   n= 7;
   printArray(A,n);
   MergeSort(A,0,6);
   printf("\nSorted ");
   printArray(A, n);

   return 0;
}
