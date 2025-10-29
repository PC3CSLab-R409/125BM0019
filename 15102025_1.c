#include <stdio.h>
int main(){
    int i, arr[10], sum = 0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];}
        printf("sum = %d\nsize = %d", sum, sizeof(arr));
        return 0;
    }