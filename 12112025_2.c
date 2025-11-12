//Main function calling another function is not recursion
//Function calling itself is recursion
//Below is a recursive way to find factorial of a number
//There is also a recursive way to find factorial of a number

#include <stdio.h>
int fun_factorial(int); //function prototype
int main(){
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    printf("The factorial of %d is: %d\n", n, fun_factorial(n)); //function call
    return 0;
}
int fun_factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    } else {
        return num * fun_factorial(num - 1); //function calling itself
    }
}

//Iterative way to find factorial of a number:
/*
#include <stdio.h>
intmain(){
    int n, i;
    int n, factorial = 1;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    if(n < 0){
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for(i = 1; i <= n; ++i){
            factorial *= i;
        }
        printf("The factorial of %d is: %d\n", n, factorial);
    }
    return 0;
}
*/