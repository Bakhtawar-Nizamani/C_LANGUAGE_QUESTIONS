#include <stdio.h>
int main(void){
    unsigned int number;
    printf("Please enter number: ");
    scanf("%d",&number);

    if(number <= 1){
        printf("Not a prime number");
        return 0;
    }
    int isPrime = 1;
    for(int i=2; i < number; i++){
        if(number % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1){
        printf("Prime Number");
    }else{
        printf("Not a prime number");
    }
}