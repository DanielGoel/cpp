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
    int n, sum, remainder;


    for (n=0; n<10000; n++){


        for (int i=1; i<n; i++){
            remainder= n%i;
            if (remainder==0)
                sum += i;   
        }

        if (sum==n)
            printf(" %d",sum);
    }
    return 0;
}
