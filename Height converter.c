#include <stdio.h>
int main()
{
	char unit;
	float temp, ans;
	printf("Enter height in (F)eet or (C)entimeter?");
	scanf("%c%f", &unit, &temp);
	switch (unit) {
		case 'c':
		ans = (temp/2.54);
		ans = (ans/12);
		printf("The entered height in feet is %f", ans);
		break;
		case 'f':
		ans = (temp*12);
		ans = (ans*2.54);
		printf("The entered height in cm is %f", ans);
		break;
		default :
		printf("Invalid Input");
	}
	return 0;
}
