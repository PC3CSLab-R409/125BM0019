#include <stdio.h>
int main() {
    int n,i;
    printf("\nEnter Array length\n");
    scanf("%d", &n);
    int A[n];
    printf("Feed the elements\n");
    for(i=0;i<n;i++) {
        scanf("%d", &A[i]);
    }
    int Rev[n];
    for(i=0;i<n;i++) {
        Rev [i] = A[n-1-i];
    }
    printf("[");
    for(i=0;i<n;i++) {
        printf("%d\t", Rev[i]);
    }
    printf("]");
}