#include <stdio.h>
int fun_arr_max(int [],int);
int main(){
    int s, A[10], i;
    printf("Enter the size of the array (max 10): \n");
    scanf("%d", &s);
    printf("Enter the elements of the array: \n");
    for(i=0; i<s; i++){
        scanf("%d", &A[i]);
    }
    printf("The maximum element in the array is: %d\n", fun_arr_max(A, s));
    return 0;
}
int fun_arr_max(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}