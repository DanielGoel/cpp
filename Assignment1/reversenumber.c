/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
int main(){
    //declares the string that we want to reverse
    char number[1];             
    printf("type a number:");
    scanf("%s", number);
    //strrev reverses whatever string is input
    printf("%s",strrev(number));   
    return 0;
}