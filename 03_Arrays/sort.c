#include <stdio.h>
int main(void){
    // Sort an array (ascending order) 
    // Bubble Sort
  
    int arr[5] = {25,8,18,45,3};

    // Print Original Array
    printf("\n\nOriginal Array\n");
    for(int i = 0;i < 5;i++){
        printf("%d ",arr[i]);
    }

    // Bubble sort
    for(int i = 0;i < 4;i++){
        for (int j = 0;j < 5 - i - 1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print (asending order)
    printf("\n\nSorted Array\n");
    for(int i = 0;i < 5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}