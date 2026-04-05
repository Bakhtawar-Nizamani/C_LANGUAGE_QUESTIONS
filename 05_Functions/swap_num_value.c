#include <stdio.h>
void swap(int x, int y);      // Function Prototype/Function Declaration
int main(void){
    // Function to swap two numbers(call by value)
    int a = 4;
    int b = 2;

    printf("Original Values\n");
    printf("a = %d, b = %d\n",a,b);

    swap(a,b);
    return 0;
}
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    printf("\nSwap Values\n");
    printf("a = %d , b = %d",x,y);
}
