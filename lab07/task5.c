#include <stdio.h>
int main(){
  int a[11] = {4,1,6,8,10,21,8,9,2,6 ,0};
  int max = a[1] , min = a[1];
  for(int i=0; i<11; i++){
    if(a[i] > max){
      max = a[i]; 
    }
    if(a[i] < min){
      min = a[i];
    }
  }
  printf("The maximum number is %d and the minimum number is %d " , max , min);
}
