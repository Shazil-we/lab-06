#include <stdio.h>
int main(){
    int input = 1;
    int  a[input];
    printf("Enter length of array");
    scanf("%d" , &input);
    for(int i = 0; i<input; i++){
        printf("Enter  number %d:\n" , i+1);
        scanf("%d" , &a[i]);
    }
    for(int i=input-1; i>=0; i--){
        printf("%d" , a[i]);
    }
}