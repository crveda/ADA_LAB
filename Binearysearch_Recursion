#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int binary_search(int arr[] , int first , int last , int x)
{
    if(first<=last)
    {
        int mid = (first+last)/2;
        if(arr[mid]==x)
        return 1;
        
        if(arr[mid] > x)
        return (binary_search(arr , first , mid-1 , x));
          
        if(arr[mid] < x)
        return binary_search(arr , mid+1 , last , x);
    }
    
    return -1;
}

int main()
{
    int n=25000;
    clock_t end,start;
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=i;
    int result , temp;
    int key = n-1;
    start=clock();
    result = binary_search(arr,0,(n-1),n-1);
    if(result > 0)
     printf("Element found\n");
    else
     printf("Element Not found\n");
     
     for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for Binary Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
     
    return 0;
     
}
