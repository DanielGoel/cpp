#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n, sum, remainder;
printf("type ur number in:");
scanf("%d", &n );

for (int i=1; i<=n; i++){
    remainder= n%i;
    if (remainder==0)
    sum += i;
}
printf("%d",sum);
return 0;
}