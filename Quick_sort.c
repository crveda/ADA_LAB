#include<stdio.h>
#include <time.h>

void quicksort(int num[25],int first,int last)
{
   int i, j, k , temp;
   if(first<last){
      k=first;
      i=first;
      j=last;
      while(i<j){
         while(num[i]<=num[k]&&i<last)
         i++;
         while(num[j]>num[k])
         j--;
         if(i<j){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }
      temp=num[k];
      num[k]=num[j];
      num[j]=temp;
      quicksort(num,first,j-1);
      quicksort(num,j+1,last);
   }
}

int main()
{
    clock_t end,start;
   int i, count,temp, number[25];
   printf("Enter number of elements:\n");
   scanf("%d",&count);
   printf("Enter elements: \n" );
   for(i=0;i<count;i++)
   scanf("%d",&number[i]);
   start=clock();
   quicksort(number,0,count-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",number[i]);
   for(int j=0;j<500000;j++)
    {
        temp=600/600;
    }
    end = clock();
    printf("\nTime taken for LINEAR Search is %f seconds\n",(((double)(end-start))/CLOCKS_PER_SEC));
    return 0;
}
