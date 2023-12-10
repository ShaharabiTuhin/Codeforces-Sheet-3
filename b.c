#include<stdio.h>
int main(){
    int n;
    long long int i,m,arr[100010],f=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]); //i=1
    }
    scanf("%lld",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            f=1;
            j=i;
            //printf("%lld\n",i);
            break;
        }
    }
        if(f==1)
        {
            printf("%lld\n",j);
        }else{
            printf("-1\n");
            //
        }

    return 0;
}
