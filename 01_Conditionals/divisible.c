#include <stdio.h>
int main(void){
   //  Check whether a number is divisible by 5 and 11 

   int number;
   printf("Enter number: ");
   scanf("%d",&number);

   if(number % 5 == 0 && number % 11 == 0){
    printf("%d is divisible by 5 and 11",number);
   }else{
    printf("%d is not divisible by 5 and 11",number);
   }

}