#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
float a, b;
char operation;
printf("imput your first number:");
scanf("%f",&a);
printf("imput your second number:");
scanf("%f",&b);
printf("imput the operation u would like to inflict on these numbers:");
scanf("%s",&operation);

if (operation == '-'){
    
    printf("%f", a-b );
}
else if (operation == '+'){
    printf("%f", a+b );
}
else if (operation == '*'){
    printf("%f", a*b );
}
else 
printf("u must insert an operation...");
return 0;
}