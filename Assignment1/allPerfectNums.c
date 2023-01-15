/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    printf("the perfect numbers are: ");
    //loops through all numbers 1 to 10000
    for(int j=1; j<10000; j++){
            int sum=0;
        for (int i=1; i<j; i++){
            int remainder= j%i;

            if (remainder==0){
                sum += i;
            }
        }
        if (sum==j){
            printf("%d ", j);
        }

    }
    return 0;
}
