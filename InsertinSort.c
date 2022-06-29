#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void insertionSort(int arr[],int n)
{
    int i , key , j;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main()
{
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
   insertionSort(arr, n);
   printf("\nAfter sorting:\n");
   for(int i=0;i<n;i++)
   printf("%d  ",arr[i]);
   
      for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for Insertion sort is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));


    return 0;
}
