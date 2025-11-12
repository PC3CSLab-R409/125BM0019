//WAP to input a number and print the corresponding day of the week. If the number is greater than 7, keep dividing it by 7 until it is less than or equal to 7.
#include <stdio.h>
int main()
    {
    int day;
    printf("Enter a number to find corresponding day.");
    scanf("%d", &day);
    while (day > 7){
    	day = day/7;
	}
	switch (day) {
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid day");
	}
	return 0;
}
