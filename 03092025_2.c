#include<stdio.h>
main()
{
	int num1, num2;
	printf("Enter two numbers ");
	scanf("%d%d", &num1, &num2);
	printf("AND Answer is %d \n", num1&&num2);
	printf("OR Answer is %d \n", num1||num2);
	printf("NOT of first input is %d \n", !num1);
	printf("Bitwise AND operation of these two is %d \n", num1&num2);
	printf("Bitwise OR operation of these two is %d \n", num1|num2);
	printf("Bitwise LEFT SHIFT operation of these two is %d", num1<<num2);
	printf("Bitwise RIGHT SHIFT operation of these two is %d", num1>>num2);
	return 0;
}
