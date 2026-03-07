#include <stdio.h>
int main(void){
    // Check whether a number is a plaindrome
    // Plaindrome -> left to right == right to left

    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    int original_number = number;
    int reverse_number = 0;
    int digit = 0;
    if(number >= 0 && number < 10){
        printf("Negative numbers cannot be palindrome");
        return 0;
    }

    // Reverse Number
    while(number > 0){
       digit = number % 10;
       reverse_number = reverse_number * 10 + digit;
       number = number / 10;
    }


    if(original_number == reverse_number){
        printf("%d is a palindrome number",original_number);
    }
      else{
        printf("%d is not palindrome number",original_number);
    }
    
  
}