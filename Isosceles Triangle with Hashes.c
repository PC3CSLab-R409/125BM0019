#include <stdio.h>
int main()
{
int r,c,h,th;
printf("Enter height of triangle: ");
if (scanf("%d", &h) != 1 || h <= 0) return 0;
th = (h*2) - 1 ;
for (r = 1; r <= h; r++) {
	/* print leading spaces */
	for (c = 0; c < h - r; c++) {
		printf(" ");
	}
	/* print hashes for this row */
	for (c = 0; c < (2 * r - 1); c++) {
		printf("#");
	}
	printf("\n");
}
return 0;
}