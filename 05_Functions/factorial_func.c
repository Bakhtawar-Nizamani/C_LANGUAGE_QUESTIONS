#include <stdio.h>
double factorial(int n);     // Function Prototype/Declaration
int main(void){
    // Function to calculate factorial 
    int number;
    printf("Please enter positive integer: ");
    scanf("%d",&number);
    
    double fact = factorial(number);  // Function Calling 
    printf("The factorial of %d is %.2f",number,factorial); 
    
    return 0;
}
double factorial(int n){  // Function Definition
    double fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    
    return fact;
}