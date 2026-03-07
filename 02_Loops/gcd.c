#include <stdio.h>
#include <stdlib.h>
int main(void){
    // GCD/HCF of two numbers
    // Greatest Common Divisor / Highest Common Factor

    printf("____Calculating GCD of two numbers___\n");
    int n1,n2;

    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter second number: ");
    scanf("%d",&n2);
    n1 = abs(n1);  // Negative to positive
    n2 = abs(n2);  // negative to positive
  
    int min_num = n1;  
    if(min_num > n2){
        min_num = n2;   // To find how many time loop will run
    }

    int gcd;
    for(int i = 1;i <= min_num;i++){
        if((n1 % i == 0) && (n2 % i == 0)){
               gcd = i;
        }
    }
    
    printf("The gcd of %d and %d is %d",n1,n2,gcd);
    return 0;
}