#include <stdio.h>
#include<time.h>
#include <unistd.h>
// #include <windows.h>
#include<stdlib.h>

void selctionsort(int arr[],int n)
{
    int min=0,pos;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                pos = j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}

int main()
{
    int n=500,temp;
    clock_t start , end;
   
    int arr[n];
  
    for(int i=0;i<n;i++)
    arr[i]=n-i;
    for(int i=0;i<n;i++)
    printf("%d  ",arr[i]);
    start = clock();
    selctionsort(arr,n);
    printf("\nAfter selection sort:\n");
    for(int i=0;i<n;i++)
    printf("%d  ",arr[i]);

    // for(int j=0;j<500000;j++)
    // {
    //     temp=600/600;
    // }
    sleep(10);
    end = clock();
    printf("\nTime taken for Linear Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
  
    
    return 0;
}
