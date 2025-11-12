#include <stdio.h>
int main()
    {
    int input,digit;
    printf ("Enter a number, I will tell its binary.");
    scanf("%d", input);
    while (input>=2){
		input = input/2;
		digit = input%2;
		printf(digit);
	}
	printf(input);
	return 0;
}
