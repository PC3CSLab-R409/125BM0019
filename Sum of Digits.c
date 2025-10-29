#include <stdio.h>
int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    while (num > 9){
    int sum=0;
    while (num != 0){
		sum = sum + (num % 10);
		num /= 10;}
    num = sum;
    }
    printf("\nSum of the digits till single digit = %d", num);
    return 0;
}