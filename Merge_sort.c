// Sort a given set of N integer elements using Merge Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.
// Program:
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r);
    }
}

int main(){
    clock_t end,start;
   int n,temp;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   arr[i]=n-i;
    printf("Before sorting:\n");
   for(int i=0;i<n;i++)
   printf("%d  ",arr[i]);
    start=clock();
    mergeSort(arr, 0, n - 1); 
     printf("\nAfter sorting:\n");
   for(int i=0;i<n;i++)
   printf("%d  ",arr[i]);
      for(int j=0;j<500000;j++)
        temp=600/600;
    end = clock();
    printf("\nTime taken for Merge sort is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
    return 0;
}
