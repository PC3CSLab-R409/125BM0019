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