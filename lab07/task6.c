#include <stdio.h>
int main()
{
  int a[7] , count , sum = 0, b[7] , j=0;
  float average = 0;
  for(int i=0; i<7; i++)
  {
    printf("Enter tempreature: ");
    scanf("%d" , &a[i]);
    if(a[i] > 40 || a[i] < 0 ){
      b[j] = i+1;
      j++;
    }
    sum = sum + a[i];
  }
  average = sum/7;
  printf("Average temperature: %dC\nExtreme temperatures on the following days:\n" , average);
  for(int i=0; i<j; i++){
    printf("Day:%d\n" , b[i]);
  }
}
