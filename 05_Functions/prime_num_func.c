#include <stdio.h>
void primeNumber(int n);    // Function Prototype / Function Declaration
int main(void){
    // Function to check prime number

    int number;
    printf("Please enter number : (1 < )  ");
    scanf("%d",&number);
    
    primeNumber(number);  // Function Calling
    return 0;
}
void primeNumber(int n){   // Function Definition
    int isPrime = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1){
        printf("Given number is prime number");
    }else{
        printf("Given number isn't prime number");
    }
}