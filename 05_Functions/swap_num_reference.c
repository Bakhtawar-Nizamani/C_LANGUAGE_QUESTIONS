#include <stdio.h>
void swap_reference(int *x, int *y);       //Function prototype
int main(void){
    // Function to swap two numbers(call by reference)
    int a = 8;
    int b = 4;

    printf("Original Values\n");
    printf("a = %d, b = %d\n", a, b);

    swap_reference(&a, &b);

    printf("\nOutside the function  a = %d , b = %d",a,b);
    return 0;
}
void swap_reference(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nInside the function a = %d , b = %d",*x, *y);
}