#include <stdio.h>
int main(){
    char name[20];
    scanf("%[^\n]" , &name);
    printf("%s" , name);
    return 0;
}