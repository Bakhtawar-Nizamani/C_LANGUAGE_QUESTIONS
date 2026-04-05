#include <stdio.h>
double factorial(int n);
int main(void){
    // Recursive function for factorial 
    int n = 5;
    
    printf("%d! = %.2f",n,factorial(n));
    
    return 0;
}
double factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}