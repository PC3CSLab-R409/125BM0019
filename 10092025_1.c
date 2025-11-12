//WAP to find the largest of four numbers using conditional operator.
#include <stdio.h>
int main()
    {
    int w,x,y,z,max1, max2, maxmax;
    printf("Enter the values of w and x and y and z \n");
    scanf("%d%d%d%d", &w, &x, &y, &z);
    max1=(w>x)?w:x;
    max2=(y>z)?y:z;
    maxmax=(max1>max2)?max1:max2;
    printf("The largest number is %d", maxmax);
    return 0;
}
