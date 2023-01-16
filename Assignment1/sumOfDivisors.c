/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n, sum, remainder;  
    //n is the number that we are trying to find the divisors for
    //sum is the sum of all divisors
    printf("type ur number in:");
    scanf("%d", &n );
    //checks if i<=n, if not then it will run until it is
    for (int i=1; i<=n; i++){  
        //finds the remainder of n/i
        remainder= n%i;
        //if the remainder of n/i = 0 then i must be a divisor        
        if (remainder==0){
            //add divisor to the sum
            sum += i; 
        }                       
                     
    }  
    //prints out the sum of divisors of the input
    printf("%d",sum);          
    return 0;  
}