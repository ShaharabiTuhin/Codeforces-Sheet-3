#include<stdio.h>
int main()
{
    int i,j,n,A[100010],ans;
    scanf("%d\n%d",&A[i],&A[j]);
    for(i=1;i<=4;i++)
    {
        scanf("%d",&n);
    }
    for(j=1;j<=4;j++)
    {
        ans=A[i]+A[j]+j-i;
    }
    printf("%d",ans);
    return 0;
}
