#include <stdio.h>
int main(void){
   // The largest of 3 numbers
   int n1,n2,n3;
   int large;
   printf("Enter First Number: ");
   scanf("%d",&n1);

   printf("Enter Second Number: ");
   scanf("%d",&n2);

   printf("Enter Third Number: ");
   scanf("%d",&n3);
  

   if(n1 > n2 && n1 > n3){
    large = n1;
   }else if (n2 > n1 && n2 > n3)
   {
    large = n2;
   }
   
   else
   {
    large = n3;
   }
   
  printf("%d is largest of 3 numbers ",large);

}