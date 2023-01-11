#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n, sum, remainder;
printf("type ur number in:");
scanf("%d", &n );

for (int i=1; i<n; i++){
    remainder= n%i;
    if (remainder==0)
    sum += i;
}
if (sum==n)
    printf("U GOT A PERFECT NUMBER!!!");
else
    printf("no perfect number for u");

return 0;
}