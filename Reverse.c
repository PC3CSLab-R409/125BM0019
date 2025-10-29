#include <stdio.h>

int main(){
	int num, rev = 0;
	printf("Enter number u want to reverse\n");
	scanf("%d", &num);
	while (num != 0){
		rev = rev*10 + num % 10;
		num /= 10;
	}
	printf("\nreverse = %d", rev);
	return 0;
}
