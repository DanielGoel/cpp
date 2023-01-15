#include <stdio.h>
#include <string.h>
#include <math.h>
int getPerfectNumbers(int j);

int main(){

    int remainder;
printf("the perfect numbers are: ");
for(int j=0; j<10000; j++){
        int sum=0;
    for (int i=1; i<j; i++){
        remainder= j%i;
        
        if (remainder==0){
            sum += i;
        }
}
    if (sum==j)
    printf("%d ", j);
}
return 0;
}
