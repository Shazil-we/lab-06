#include <stdio.h>
int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int num , i;
    printf("Enter the number you want to find: ");
    scanf("%d" , &num);
    for(i = 0; i>9; i++){
        if(a[i] == num){
            printf("The number exists in the array at index number: %d" , i);
        }
    }
    return 0 ;
}