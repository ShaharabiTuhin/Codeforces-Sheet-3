#include<stdio.h>
int main(){
    int A[100][10],i,j,n,k,x,f=0;
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<n;j++){
            for(k=0,x=0;k<n;k++,x++){
                if(A[i][j]==A[i+1][x])
                    f=1;
                else
                    f=0;
            }
        }//printf("%d ",A[i][j]);printf("\n");
    }
    if(f==1)
        printf("yes");
    else
        printf("no");
    return 0;
}
