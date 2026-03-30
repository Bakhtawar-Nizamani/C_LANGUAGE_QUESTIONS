#include <stdio.h>
int max_two_num(int n1, int n2);  // Function Prototype/Declaration
int main(void){
    // Function to find maximum of two numbers

    int first_number,second_number;

    printf("Please Enter first number: ");
    scanf("%d",&first_number);

    printf("Please Enter second number: ");
    scanf("%d",&second_number);

    int maximum = max_two_num(first_number,second_number);   // Function Calling

    printf("The maximum of two number is %d",maximum);

    return 0;
}
int max_two_num(int n1, int n2){   // Function Definition
    int max = n1;
    if(max < n2){
        max = n2;
    }
    return max;
}