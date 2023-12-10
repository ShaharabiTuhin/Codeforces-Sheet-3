#include<stdio.h>
int main()
{
    int i,n,A[100010],x=2e9,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    {
        if(x>A[i])
        {
            x=A[i];
            j=i+1;
        }
    }
    printf("%d %d",x,j);
    return 0;
}
