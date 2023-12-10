#include<stdio.h>
int main()
{
    int i,j,n,A[1010],min,cunt=0;
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    min=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    for(i=0;i<n;i++){
        if(A[i]==min)
        {
            cunt++;
        }
    }
    if(cunt%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
    return 0;
}
