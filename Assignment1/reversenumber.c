#include <stdio.h>
#include <string.h>
int main(){
    char number[4];
printf("type a number:");
scanf("%s", number);
printf("%s",strrev(number));
return 0;
}