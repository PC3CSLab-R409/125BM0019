#include <stdio.h>
int main()
{
	char unit;
	float temp, ans;
	printf("Enter temperature in (F)ahrenheit or (C)elsius?");
	scanf("%c%f", &unit, &temp);
	switch (unit) {
		case 'c':
		ans = ((temp*(9.0/5.0))+32);
		printf("The entered temp in deg F is %f", ans);
		break;
		case 'f':
		ans = ((temp-32)*(5.0/9.0));
		printf("The entered temp in deg C is %f", ans);
		break;
		default :
		printf("Invalid Input");
	}
	return 0;
}
