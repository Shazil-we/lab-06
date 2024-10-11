#include <stdio.h>
int main(){
    int input = 1, sum;
    int  a[input];
    printf("Enter length of array");
    scanf("%d" , &input);
    for(int i = 0; i<input; i++){
        printf("Enter  number %d:\n" , i+1);
        scanf("%d" , &a[i]);
        sum = sum + a[i];
    }
    printf("THe sum of the array is: %d" , sum);
}