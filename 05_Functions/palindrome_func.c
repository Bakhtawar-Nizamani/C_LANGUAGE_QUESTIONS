#include <stdio.h>
void palindrome(int n);
int main(void){
    // Function to check palindrome

    int number;
    printf("Please enter number: ");
    scanf("%d",&number);

    palindrome(number);
    return 0;
}
void palindrome(int n){
    int original_number = n;
    int digit = 0;
    int reverse_num = 0;

    while (n > 0)
    {
        digit = n % 10;
        reverse_num = reverse_num * 10 + digit;
        n = n / 10;
    }
    
    if(original_number == reverse_num){
        printf("Palindrome Number");
    }else{
        printf("Not Palindrome Number");
    }
    
}