#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int i,n,arr[100010] ,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum+=arr[i];
    }
    printf("%lld",abs(sum));
    return 0;
}
