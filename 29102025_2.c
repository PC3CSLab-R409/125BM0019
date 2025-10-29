#include <stdio.h>

int square(int); //prototype

int main() {
    int n, result;
    scanf("%d", &n);
    result = square(n);
    printf("%d", result);
    return 0;
}

int square(int n) {
    return(n*n);
}