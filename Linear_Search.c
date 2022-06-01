#include<stdio.h>
#include <time.h>
int main()
{
    clock_t end,start;
    int n=5000;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=i;
    int key,flag=0,temp;
    key=arr[n-1];
    start=clock();
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("Element found at location %d of array\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Element Not found in array\n");
    for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for LINEAR Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
    return 0;
}
