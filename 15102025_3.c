//Separate even and odd numbers from an array
#include <stdio.h>
int main(){
    int n, x=0, y=0, i, num;
    printf("How many elements in array?");
    scanf("%d", &n);
    int arr[n], subarreven[n], subarrodd[n];
    printf("Start feeding numbers\n");
    for (i=0; i<n; i++) {
        scanf("%d", &num);
        arr[i]=num;
        if (num%2 == 0) {
            subarreven[x] = num;
            x++;
        }
        else {
            subarrodd[y] = num;
            y++;
        }
    }
    printf("\nGiven Array:\n");
    i=0;
    while (i<n) {
        printf("%d\n", arr[i]);
        i++;
    }
    printf("\nEvens:\n");
    i=0;
    while (i<x) {
        printf("%d\n", subarreven[i]);
        i++;
    }
    printf("\nOdds:\n");
    i=0;
    while (i<y) {
        printf("%d\n", subarrodd[i]);
        i++;
    }
}