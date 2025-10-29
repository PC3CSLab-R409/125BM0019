#include <stdio.h>
int main(){
    int i, arr[10], small, large;
    printf("Enter 10 no.s \n");
    for (i=0;i<10;i++){
    	scanf("%d", &arr[i]);
	}
	small=arr[0];
	large=arr[0];
	for (i=1;i<10;i++){
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];}
	printf("smallest=%d\nlargest=%d", small, large);
	}
