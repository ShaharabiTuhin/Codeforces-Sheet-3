#include<stdio.h>
int main()
{
    long long int i,n,A[100010],f=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&A[i]);
    for(i=0;i<n;i++)
    {
        if(A[i]==A[n-1])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
        n--;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
