#include <stdio.h>
int main()
    {
    double x,y,z,max;
    printf("Enter the values of x and y and z \n");
    scanf("%lf%lf%lf", &x, &y, &z);
    max=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("The largest number is %lf", max);
    return 0;
}
