#include<stdio.h>
int main()
{
    int i,n,A[100010],x=2e9,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
