#include <stdio.h>
void swap_pointer(int *x, int *y);
int main(void){

    // Swap two numbers using pointers

    int a = 13;
    int b = 15;

    swap_pointer(&a,&b);

    printf("\nValue outside the function\n a = %d and b = %d",a,b);

    return 0;
}
void swap_pointer(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("\nValue inside the function\n a = %d and b = %d",*x,*y);
}