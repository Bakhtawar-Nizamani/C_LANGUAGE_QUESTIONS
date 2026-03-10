#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Find sum and average of array elements 

    int size;
    printf("How many elements you want in array? ");
    scanf("%d",&size);

    int numbers[size];

    system("cls");
    
    // Input -> array elements
    for(int i = 0;i < size;i++){
        printf("%d. Enter number: ",i+1);
        scanf("%d",&numbers[i]);
    }

    int sum_arr = 0;
    float average_arr;
    // Calculating sum
    for(int i = 0;i < size;i++){
        sum_arr += numbers[i];
    }

    average_arr = sum_arr / size;
    
    // Print sum and average
    system("cls");
    printf("The sum of given array = %d",sum_arr);
    printf("\nThe average of given array = %.2f",average_arr);

    
    return 0;
}