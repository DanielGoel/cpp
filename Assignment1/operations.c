/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){

    //variables for both numbers and the operation that they would like to use
    float a, b;
    char operation;

    //getting 3 inputs from the user so that we can use two numbers and an operation
    printf("input your first number:");         
    scanf("%f",&a);
    printf("input your second number:");
    scanf("%f",&b);
    printf("input the operation u would like to inflict on these numbers:");
    scanf("%s",&operation);

    //checks if the operation inputed was subtraction
    if (operation == '-'){          
        printf("%f", a-b );
    }
    //checks if the operation inputed was addition
    else if (operation == '+'){    
        printf("%f", a+b );
    }
    //checks if the operation inputed was multiplication
    else if (operation == '*'){ 
        printf("%f", a*b );
    }
    //if none of the if statements are true then the user didnt enter in an operation
    else 
        printf("u must insert an operation...");   
    return 0;
}