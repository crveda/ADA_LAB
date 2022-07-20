#include <stdio.h>

void tological_sort(int n, int a[10][10])
{
    int k,u, top,s[10] ,t[10],inde[10],sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
        inde[i]=sum;
    }
    top=-1;
    for(int i=0;i<n;i++)
    {
        if(inde[i]==0)
        {
            s[++top]=i;
        }
    }
    k=0;
    while(top != -1)
    {
        u = s[top--];
        t[k++]=u;
        for(int v=0;v<n;v++)
        {
            if(a[u][v]==1)
            {
                inde[v]=inde[v]-1;
                if(inde[v]==0)
                {
                    s[++top]=v;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
       printf("%d  ",t[i]);
}

int main()
{
    int a[10][10];
    int n;
    printf("Enter number of vertices:\n");
    scanf("%d",&n);
    printf("Enter edges of adjancy matix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    tological_sort(n , a);
    return 0;
}
