#include <stdio.h>
int fibbonaci(int); //function prototype
int main(){
    int n, i;
    printf("Enter number of elements in Fibbonaci series: \n");
    scanf("%d", &n);
    printf("Fibbonaci series:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", fibbonaci(i)); //function call
    }
    return 0;
}
int fibbonaci(int num){
    if(num == 0){
        return 0;
    } else if(num == 1){
        return 1;
    } else {
        return fibbonaci(num - 1) + fibbonaci(num - 2); //Recursion!!!
    }
}