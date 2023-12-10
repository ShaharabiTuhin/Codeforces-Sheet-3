#include<stdio.h>
int main(){
    char A[20];
    int i,n,a,b,x,f=0;
    scanf("%d%d",&a,&b);
    x=a+b+1;
    scanf("%s",A);
    for(i=0;A[i]!='\0';i++)
    {
    if(A[a]=='-'&&A[i]>='0'&&A[i]<='9')
        f==1;
    }
    if(f==1)
        printf("Yes");
    else
         printf("No");

    return 0;
}
