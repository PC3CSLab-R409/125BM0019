//Logical OR operator demonstration
//In OR it checks only first condition if it is true it will not check second condition!!!
//Don't do this mistake in quiz!!!

#include <stdio.h>


int main() {
    int a = 10;
    int b = 20;
    if (a>5||++b<25) {
        printf("%d", b);}
    else {
        printf("Error");
    }
}