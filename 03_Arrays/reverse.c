#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Reverse an array 

    int numbers[5];
    
    // Input -> array element
    for(int i = 0; i < 5;i++){
      printf("No.%d: Please enter number: ",i+1);
      scanf("%d",&numbers[i]);
    }
    
    // Reverse Array
    int reverse_arr[5];
    for(int i = 0;i < 5;i++){
        reverse_arr[5-1-i] = numbers[i];
    
    }

    system("cls"); // Clear screen

    // Original Array
    printf("\nOriginal Array\n\n");
    for(int i = 0; i < 5;i++){
      printf("%d,",numbers[i]);
    }

    // Reverse Array
    printf("\n\nReverse Array\n\n");
    for(int i = 0; i < 5;i++){
      printf("%d,",reverse_arr[i]);
    }


    
    return 0;
}