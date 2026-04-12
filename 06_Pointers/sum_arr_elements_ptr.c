#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Sum of array elements using pointers 
    
    int size_arr;
    
    printf("How many elements do you want to enter? ");
    scanf("%d",&size_arr);
    
    int arr[size_arr];
    for(int i = 0; i < size_arr; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    int sum_arr_elements = 0;
    int *ptr = arr;    // ptr points to base address (first element of an array)
    

    for(int i = 0; i < size_arr; i++){
       sum_arr_elements += *(ptr + i);  // Calculate sum using pointers
    }

    system("cls");   // clear screen
    
    // Print Array Elements
    printf("Array Elements: ");
    for(int i = 0; i < size_arr; i++){
        printf("%d ",arr[i]);
    }

    // Print sum of array element
    printf("\n\nThe sum of array elements is  = %d",sum_arr_elements);


    return 0;
}