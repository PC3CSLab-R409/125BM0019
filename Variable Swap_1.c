#include <stdio.h>
int main() {
    int a, b, arr[2];
    printf("\nEnter a and b\n");
    scanf("%d%d", &arr[0], &arr[1]);
    a = arr[0];
    b = arr[1];
    printf("\nValue of a = %d and b = %d before swapping\n",a,b);
    a = arr[1];
    b = arr[0];
    printf("\nValue of a = %d and b = %d after swapping\n",a,b);
}