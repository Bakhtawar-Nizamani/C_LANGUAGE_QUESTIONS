#include <stdio.h>
#include <stdlib.h>
int main(void){
    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);
    
    int digit = 0;
    int reverse_num = 0;
    number = abs(number);  // Change negative number into positive number
    if(number >= 0 && number < 10 ){
        printf("Not exist reverse number");
        return 0;
    }
    while(number > 0 ){
        digit = number % 10;
        reverse_num = reverse_num * 10 + digit;
        number = number / 10;
    }
    printf("Reverse number of given number: %d",reverse_num);
    
    return 0;
}