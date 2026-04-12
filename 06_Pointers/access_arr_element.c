#include <stdio.h>
int main(void){
    // Access Array Elements Using Pointers

    int arr[5] = {22,24,26,28,32};  // Initilise an array contains 5 elements

    int *ptr = arr;  // pointer points to first element

    for(int i = 0; i < 5; i++){
        printf("%d\n",*(ptr + i));
    }

    
    return 0;
}