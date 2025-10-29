#include <stdio.h>
int main() {
    int m,n;
    printf("\nEnter no. of row and column\n");
    scanf("%d%d", &m, &n);
    int mat1[m][n], i, j, mat2[m][n], sum[m][n];
    printf("\nFeed the elements\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nFeed the elements again\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("The Sum Matrix:");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            printf("%d\t", sum[i][j]);
        }
    printf("\n");
    }
}