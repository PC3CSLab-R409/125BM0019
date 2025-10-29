#include <stdio.h>
int main()
{
int r,c,h;
printf("Enter height of triangle");
scanf("%d", &h);
for (r = 1; r <= h; r++) {
	c = 1;
	while (c<=r){
		printf("#");
		c++;
		if (c>r) {
			while(c<=h){
				printf("-");
				c++;
			}
		}
	}
	printf("\n");
}
return 0;}
