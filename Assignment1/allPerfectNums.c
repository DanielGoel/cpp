#include <stdio.h>

int main(){
    printf("the perfect numbers are: ");
    int n;
    for (int j=1; j<=10000; j++){
    n=0;
        for (int i=1; i<=j/2; i++){
            if (j%i==0)
                n += i;
    }
          if (n==j)
            printf(" %d",j);
}
  return 0;
}