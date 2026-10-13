#include <stdio.h>
#include <stdlib.h>
int factorial(int x );
int main(){
  int x :
printf("enter your number :");
scanf("%d ", &x);
int fact = factorial(x);
printf("The factorial of %d is : %d\n", x , fact);
return 0;
}

int factorial (int x ){
  int fact =1 ;
  int i=1;
  while (i <= x ){
    fact = fact * i;
    i++;
  }
  return fact;
}
