#include <stdio.h>
int main(void){
  // Factorial of a number
  // n! = n * (n-1) * (n-2) *...*3*2*1
  // 5! = 5*4*3*2*1
  // 5! = 1*2*3*4*5
   int number;
   printf("Please enter positive integer: ");
   scanf("%d",&number);
   
  if(number < 0){
    printf("Factorial doesn't exist");
    return 0;
  }
  if(number == 0 || number == 1){
   printf("%d! = 1",number);
   return 0;
  }
  double fact = 1;
  for (int i=1; i <= number;i++){
    fact = fact * i;
  }
  printf("%d! = %.2f",number,fact);
   return 0;
}