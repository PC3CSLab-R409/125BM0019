//Variable swap using bitwise XOR operator
#include <stdio.h>
int main() {
    int a, b;
    printf("\nEnter a and b\n");
    scanf("%d%d", &a, &b);
    printf("\nValue of a = %d and b = %d before swapping\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\nValue of a = %d and b = %d after swapping\n",a,b);
}