#include <stdio.h>
#include <stdlib.h>
void reverse_num(int n);  
int main(void){
    // Function to reverse a number
    
    int number;
    printf("Please enter number: ");
    scanf("%d",&number);
    
    reverse_num(number);


    return 0;
}
void reverse_num(int n){
    int digit = 0;
    int reverse_number = 0;
    n = abs(n);
    if(n >= 0 && n <= 9){
        printf("No exist reverse number");
    }
    while (n > 0)
    {
       digit = n % 10;
       reverse_number = reverse_number * 10 + digit;
       n = n / 10;
    }
    printf("Reverse Number: %d",reverse_number);
}