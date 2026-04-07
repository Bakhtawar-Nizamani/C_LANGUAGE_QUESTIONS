#include <stdio.h>
int main(void){
    // Print value and address of a variable

    int number = 24;
    int *ptr = &number;

    printf("Value of number: %d",*ptr);
   
    printf("\nAddress of number: %d",ptr);

    return 0;
}