#include <stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter 2 no.s\n");
    scanf("%d %d", &m, &n);
    int mat[m][n];
    printf("Feed the elements\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int sum=0;
    for (i=0; i<(m<n?m:n); i++) {
        sum = sum + mat[i][i];
    }
    printf("\nInput matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            printf("%d\t", mat[i][j]);
        }
    printf("\n");
    }
    printf("\nSum of apt diag: \n%d\n", sum);
    return 0;
}