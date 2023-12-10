#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,arr[100010];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {arr[i]=1;
        printf("%d ",arr[i]);}
        else if(arr[i]<0)
        {arr[i]=2;
        printf("%d ",arr[i]);}
        else
        {arr[i]=0;
        printf("%d ",arr[i]);}
    }
    return 0;
}
