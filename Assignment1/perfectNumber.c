/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    //n is the number that we are trying to find the divisors for
    //sum is the sum of all divisors
    int n, sum, remainder;
    printf("type ur number in:");
    scanf("%d", &n );

    //uses the sumOfDivisors statement to add all of the divisors except itself
    for (int i=1; i<n; i++){  
        remainder= n%i;
        if (remainder==0){
            sum += i;
        }
    }
    //if the sum is equal to the number inputed then this means that n is a perfect number
    if (sum==n){
        printf("U GOT A PERFECT NUMBER!!!");
    }                
    //if the sum is not equal to the number inputed the n isnt a perfect number
    else{
        printf("no perfect number for u");
    }
    return 0;
}