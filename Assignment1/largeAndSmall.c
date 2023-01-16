/*
Daniel Goel
1/14/2023
assignment 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
  //declare the variables that are going to be used
  //the number array will be used to store the users numbers
  int numbers[5], large, small;
  //Loops through 5 times to assign each user input a spot in the number array
  for (int i=0; i<5; i++){
  //asks user to input the first number and adds 1 each time the for loop runs
  printf("please input number %d ", i+1);
  //scans user input and adds it to the number array
  scanf("%d",&numbers[i]);
  }
    //loops throuhg all 5 numbers in the array and compares them
    for (int i = 0; i < 5; ++i) {\
      //if the number in the array at positon i is larger than any other number that has already been checked
      if (large< numbers[i]) {
      // set it as the new large number
      large = numbers[i];
      }
    }
    //loops throuhg all 5 numbers in the array and compares them
    for (int i = 0; i < 5; ++i) {
      //if the number in the array at positon i is smaller than any other number that has already been checked then set it as the new small number
      if (small> numbers[i]) {
      //set it as the new small number
      small = numbers[i];
      }
    }
  //print large and small number
  printf("the largest number is %d\n", large);
  printf("the smallest number is %d", small);
}