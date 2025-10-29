#include <stdio.h>

int main() {
    int num, i, x, c = 0, j = 2;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (j <= num) {
        i = 2;
        x = 0;

        while (i <= j) {
            if (j % i == 0) {
                x++;
            }
            i++;
        }

        if (x == 1) {
            printf("\n%d", j);
            c++;
        }

        j++;
    }

    printf("\nPrimes = %d\n", c);
    return 0;
}
