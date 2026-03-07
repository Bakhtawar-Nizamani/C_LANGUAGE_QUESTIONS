#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    // Check whether a number is armstrong 
    // 1. Count number in a digit
    // 2. Compute sum 
    // 3. Compare computed sum and original number
    
    int number;
    printf("Please enter number: ");
    scanf("%d",&number);
    
    number = abs(number);   // Change negative into positive
    
    int temp = number;
    int temp2 = number;
    
    // 1. Count number in a digit
    int digit = 0;
    if (temp == 0){
        printf("There are 1 digit in given number");
        return 0;
    }
    while(temp > 0){
        temp = temp / 10;
        digit++;
    }
    
   
    // 2. Compute Sum
    int new_digit = 0;
 
    int computed_sum = 0;
    while (temp2> 0)
    {
        new_digit = temp2 % 10;
       
        computed_sum += pow(new_digit,digit);
        temp2 /= 10;
       
    }
    
   // 3. Compare
   if(number == computed_sum){
    printf("Armstrong number");
   }else{
    printf("Not Armstrong");
   }
    
    return 0;
}