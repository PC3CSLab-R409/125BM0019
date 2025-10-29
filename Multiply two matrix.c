#include <stdio.h>
int main() {
    int m, n, o, p;
    printf("\nEnter no. of row and column of 1st matrix\n");
    scanf("%d%d", &m,&n);
    printf("\nEnter no. of row and column of 2nd matrix\n");
    scanf("%d%d", &o,&p);
    if (n == o) {
        int mat1[m][n]; 
        int mat2[o][p];
        int mul[m][p]; 
        int i, j, k; 
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
                mul[i][j] = 0;
            }
        }
        printf("\nFeed the elements of the 1st matrix (%d x %d):\n", m, n);
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++){
                scanf("%d", &mat1[i][j]);
                }
            }
        printf("\nFeed the elements of the 2nd matrix (%d x %d):\n", o, p);
        for(i = 0; i < o; i++) {
            for(j = 0; j < p; j++){
                scanf("%d", &mat2[i][j]);
            }
        }
        for (i = 0; i < m; i++) {       
            for (j = 0; j < p; j++) {  
                for (k = 0; k < n; k++) { 
                    mul[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("\nThe 1st Matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            printf("%d\t", mat1[i][j]);
        }
    printf("\n");
    }
    printf("\nThe 2nd Matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            printf("%d\t", mat2[i][j]);
        }
    printf("\n");
    }
        printf("\n\nThe Multiplied Matrix (%d x %d):\n", m, p);
        for(i = 0; i < m; i++) {
            for(j = 0; j < p; j++){ 
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nMultiplication is not possible: Column count of 1st matrix must equal Row count of 2nd matrix (%d != %d).\n", n, o);
    }
    return 0;
}