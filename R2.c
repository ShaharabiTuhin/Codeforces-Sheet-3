#include <stdio.h>
int main() {
    int i, j, n, A[100][100], t, min, k,f=1;
    scanf("%d", &n);// fill the array
    for (j = 0; j < 2; j++) {
        for (i = 0; i < n; i++) {
            scanf("%d", &A[i][j]);
        }
    }// sort each row of the array
    for (j = 0; j < 2; j++) {
        for (i = 0; i < n - 1; i++) {
            min = i;
            for (k = i + 1; k < n; k++) {
                if (A[k][j] < A[min][j]) {
                    min = k;
                }
            }
            if (min != i) {
                t = A[i][j];
                A[i][j] = A[min][j];
                A[min][j] = t;
            }
        }
    }// print the sorted array
    //for (j = 0; j < 2; j++) {
    //    for (i = 0; i < n; i++) {
    //        printf("%d ",A[i][j]);
    //   }printf("\n");
    //}
    for (i = 0; i < n; i++) {
        if(A[0][i]!=A[1][i])
            f=0;
            break;
    }
    if(f==1)
        printf("yes");
    else printf("no");
    return 0;
}
