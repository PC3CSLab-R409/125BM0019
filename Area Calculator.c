#include <stdio.h>
int main()
{
	char unit;
	float temp, ans, pmet;
	printf("Find area of (C)ircle (S)quare or (R)ectangle? \n");
	scanf("%c", &unit);
	switch (unit) {
		case 'c':
		printf("Enter Radius of Circle \n");
		scanf("%f", &temp);
		ans = (22.0/7.0)*temp*temp;
		printf("The area of circle %.3f", ans);
		break;
		case 's':
		printf("Enter Side of Square \n");
		scanf("%f", &temp);
		ans = temp*temp;
		printf("The area of square %.3f", ans);
		break;
		case 'r':
		printf("Enter Length and Breadth of Rectangle \n");
		scanf("%f%f", &temp, &pmet);
		ans = temp*pmet;
		printf("The area of rectangle %.3f", ans);
		break;
		default :
		printf("Invalid Input");
	}
	return 0;
}
