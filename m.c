#include<stdio.h>
int main(){
    int i,j=0,k=0,t=0,n,A[100010],min,max;
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    min=A[0];
    for(i=0;i<n;i++){
        if(A[i]<min){
            min=A[i];
            j=i;
        }
    }//printf("%d ",min);
    max=A[0];
    for(i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
            k=i;
        }
    }//printf("%d ",max);
    t=A[j];
    A[j]=A[k];
    A[k]=t;
    for(i=0;i<n;i++)
       printf("%d ",A[i]);
    return 0;
}

