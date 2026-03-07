#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Count digits in a number
    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);
    
    number = abs(number); // Change negative number into positive number
    int digit = 0;
    if (number == 0){
        printf("There are 1 digit in given number");
        return 0;
    }
    while(number > 0){
        number = number / 10;
        digit++;
    }
    printf("There are %d digits in given number",digit);

    return 0;
}