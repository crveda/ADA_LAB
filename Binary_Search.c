#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    clock_t end,start;
    int n=5000;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=i;
    int key,flag=0,temp=0;
    key=arr[n-1];
    int first=0,last=n-1,mid;
    start=clock();
    while(last>=first)
    {
        mid=(first+last)/2;
        if(key==mid)
        {
            printf("Element found\n");
            flag=1;
            break;
        }
        if(key<mid)
        {
            last=mid-1;
        }
        if(key>mid)
            first=mid+1;
    }
    if(flag==0)
    {
        printf("Element Not found\n");
    }
    for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for Binary Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
    return 0;
}
