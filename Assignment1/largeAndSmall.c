#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){

int numbers[5], large, small;
for (int i=0; i<5; i++){
printf("please input number %d ", i+1);
scanf("%d",&numbers[i]);
}
  for (int i = 0; i < 5; ++i) {
    if (large< numbers[i]) {
    large = numbers[i];
    }
  }


  for (int i = 0; i < 5; ++i) {
    if (small> numbers[i]) {
    small = numbers[i];
    }
  }
printf("the largest number is %d\n", large);
printf("the smallest number is %d", small);




}