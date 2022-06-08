#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int LinearSearch(int arr[],int first ,int n , int x)
{
    if(first < n)
    {
        if(arr[first]==x)
         return 1;
         
         else
         return LinearSearch(arr , (first+1) , n , x);
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
    int result ,temp;
     start=clock();
    result = LinearSearch(arr , 0 , n , n-1);
    if(result > 0)
     printf("Element found\n");
    else
     printf("Element Not found\n");
     
      for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for Linear Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
     
    return 0;
     
}
