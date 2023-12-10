#include<stdio.h>
int main()
{
    int i,j,n,A[1010],t,min;
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            t=A[i];
            A[i]=A[min];
            A[min]=t;
        }
    }
    for(i=0;i<n;i++)
            printf("%d ",A[i]);
    return 0;
}
