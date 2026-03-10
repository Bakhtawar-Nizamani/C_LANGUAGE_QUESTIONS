#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Find largest and smallest element in an array 

    int numbers[6];
    
    // Input -> array elements
    for(int i = 0;i < 6;i++){
        printf("%d) Please enter number: ",i+1);
        scanf("%d",&numbers[i]);
    }
    
    // To find out largest element in an array
    int largest_element = numbers[0];
    for(int i = 0;i < 6;i++){
      if(largest_element < numbers[i]){
        largest_element = numbers[i];
      }
    }

    // To find out smallest element in an array
    int smallest_element = numbers[0];
    for(int i = 0;i < 6;i++){
        if(smallest_element > numbers[i]){
            smallest_element = numbers[i];
        }
    }
    
    system("cls"); // Clear screen

    // Print largest element & smallest element in an array
    printf("\n\t\tThe largest element in array = %d",largest_element);
    printf("\n\t\tThe smllest element in an array = %d\n\n",smallest_element);

    return 0;
}
 
 
 