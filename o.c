#include<stdio.h>
int main(){
    long long int A[60],i=1,n,a=0,b=1;
    scanf("%lld",&n);
    A[1]=0;
    A[2]=1;
    for(i=1;i<=50;i++){
        A[i+2]=a+b;
        a=b;
        b=A[i+2];
        //printf("%lld ",A[i+2]);
    }
    printf("%lld",A[n]);
    return 0;
}

