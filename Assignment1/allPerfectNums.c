#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n, sum, remainder;
    for (n=0; n<10000; n++){
        for (int i=1; i<n; i++){
            remainder= n%i;
            if (remainder==0)
                sum += i;   
        }
        if (sum==n)
            printf("%d  ",sum);
    }
    return 0;
}