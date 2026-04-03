#include <stdio.h>
#include <stdlib.h>
int sum_arr(int arr[5]);
int main(void){
    // Function to find sum of array elements 
    
    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the value of %d: ", i);
        scanf("%d",&arr[i]);
    }
    
    system("cls");
    printf("\nArray Elements");
    for(int i = 0; i < 5; i++){
        printf("%d,",arr[i]);
    }

    printf("\nThe sum of above array elements is = %d",sum_arr(arr));

    return 0;
}
int sum_arr(int arr[5]){
    int sum_arr_elements = 0;
    for(int i = 0; i < 5; i++){
        sum_arr_elements += arr[i];
    }
    return sum_arr_elements;
}